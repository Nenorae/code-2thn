from wallet import Wallet
from dex import DEX
from config import CONFIG

if __name__ == "__main__":
    # Inisialisasi wallet
    wallet = Wallet()
    print(f"Wallet balance: {wallet.get_balance()} ETH")

    # Inisialisasi DEX
    dex = DEX(wallet.web3)

    # Contoh swap token
    token_in = "0x...TokenInAddress"
    token_out = "0x...TokenOutAddress"
    amount_in = wallet.web3.toWei(0.01, 'ether')
    dex.swap_token(wallet, token_in, token_out, amount_in)
