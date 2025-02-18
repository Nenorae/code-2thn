CONFIG = {
    "WALLET": {
        "private_key": "YOUR_WALLET_PRIVATE_KEY",
        "address": "YOUR_WALLET_ADDRESS",
        "chain": "ethereum",  # ethereum, bsc, solana
        "rpc_url": "https://mainnet.infura.io/v3/YOUR_INFURA_PROJECT_ID"
    },
    "DEX": {
        "uniswap_router_address": "0x...UniswapRouter",
        "slippage": 0.01
    },
    "FILTERS": {
        "min_liquidity": 5000,
        "chain_whitelist": ["ethereum", "binance-smart-chain"]
    }
}
