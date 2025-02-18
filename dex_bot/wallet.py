from web3 import Web3
from config import CONFIG

class Wallet:
    def __init__(self):
        self.web3 = Web3(Web3.HTTPProvider(CONFIG["WALLET"]["rpc_url"]))
        self.address = CONFIG["WALLET"]["address"]
        self.private_key = CONFIG["WALLET"]["private_key"]

    def get_balance(self):
        """Cek saldo wallet"""
        balance = self.web3.eth.get_balance(self.address)
        return self.web3.fromWei(balance, 'ether')

    def sign_and_send_transaction(self, transaction):
        """Tanda tangan dan kirim transaksi"""
        signed_tx = self.web3.eth.account.sign_transaction(transaction, self.private_key)
        tx_hash = self.web3.eth.send_raw_transaction(signed_tx.rawTransaction)
        return self.web3.toHex(tx_hash)
