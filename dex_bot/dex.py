from web3 import Web3
from config import CONFIG

class DEX:
    def __init__(self, web3: Web3):
        self.web3 = web3
        self.router_address = CONFIG["DEX"]["uniswap_router_address"]
        self.router_contract = self.web3.eth.contract(
            address=self.router_address,
            abi=[...]  # Masukkan ABI Uniswap di sini
        )

    def swap_token(self, wallet, token_in, token_out, amount_in):
        """Swap token menggunakan Uniswap"""
        deadline = self.web3.eth.get_block('latest')['timestamp'] + 300
        amount_out_min = int((1 - CONFIG["DEX"]["slippage"]) * self.get_price(token_in, token_out, amount_in))
        
        tx = self.router_contract.functions.swapExactTokensForTokens(
            amount_in,
            amount_out_min,
            [token_in, token_out],
            wallet.address,
            deadline
        ).build_transaction({
            'from': wallet.address,
            'gas': 200000,
            'gasPrice': self.web3.toWei('5', 'gwei'),
            'nonce': self.web3.eth.get_transaction_count(wallet.address)
        })

        tx_hash = wallet.sign_and_send_transaction(tx)
        print(f"Swap executed: {tx_hash}")
        return tx_hash
