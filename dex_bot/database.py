from sqlalchemy import create_engine
from config import CONFIG

def init_db():
    """Inisialisasi tabel database"""
    engine = create_engine(
        f'postgresql+psycopg2://{CONFIG["DB"]["user"]}:{CONFIG["DB"]["password"]}'
        f'@{CONFIG["DB"]["host"]}/{CONFIG["DB"]["dbname"]}'
    )
    with engine.connect() as conn:
        conn.execute("""
            CREATE TABLE IF NOT EXISTS blacklist (
                address VARCHAR(42) PRIMARY KEY,
                type VARCHAR(20),
                reason TEXT,
                listed_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
            );
        """)

def save_blacklist(address, type, reason):
    """Simpan entry ke tabel blacklist"""
    engine = create_engine(
        f'postgresql+psycopg2://{CONFIG["DB"]["user"]}:{CONFIG["DB"]["password"]}'
        f'@{CONFIG["DB"]["host"]}/{CONFIG["DB"]["dbname"]}'
    )
    with engine.connect() as conn:
        conn.execute("""
            INSERT INTO blacklist (address, type, reason)
            VALUES (%s, %s, %s)
            ON CONFLICT (address) DO NOTHING;
        """, (address, type, reason))
