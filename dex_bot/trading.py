import ccxt
from config import CONFIG

class TradingBot:
    def __init__(self):
        self.exchange = ccxt.binance({
            'apiKey': CONFIG["API"]["binance_api_key"],
            'secret': CONFIG["API"]["binance_secret"],
            'enableRateLimit': True,
        })
        self.portfolio = []  # Format: [{'symbol': ..., 'amount': ..., 'buy_price': ...}]

    def buy_token(self, symbol, amount):
        """Buy token di exchange"""
        try:
            order = self.exchange.create_market_buy_order(symbol, amount)
            print(f"Buy executed: {order}")
            self.portfolio.append({'symbol': symbol, 'amount': amount, 'buy_price': order['price']})
        except Exception as e:
            print(f"Buy error: {e}")

    def sell_token(self, symbol, amount):
        """Sell token di exchange"""
        try:
            order = self.exchange.create_market_sell_order(symbol, amount)
            print(f"Sell executed: {order}")
            self.portfolio = [p for p in self.portfolio if p['symbol'] != symbol or p['amount'] != amount]
        except Exception as e:
            print(f"Sell error: {e}")
