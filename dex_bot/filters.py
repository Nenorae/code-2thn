import pandas as pd
from config import CONFIG

def apply_filters(df: pd.DataFrame) -> pd.DataFrame:
    """Filter data berdasarkan konfigurasi"""
    # Filter chain whitelist
    df = df[df['chain'].isin(CONFIG["FILTERS"]["chain_whitelist"])]
    # Filter likuiditas
    df = df[df['liquidity'] >= CONFIG["FILTERS"]["min_liquidity"]]
    return df
