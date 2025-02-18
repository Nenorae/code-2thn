import requests

def fetch_pair_data():
    """Ambil data pasangan dari DexScreener API"""
    response = requests.get("https://api.dexscreener.io/latest/dex/pairs")
    return response.json()['pairs']
