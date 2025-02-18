from sklearn.ensemble import IsolationForest
import numpy as np

class AnomalyDetector:
    def __init__(self):
        self.model = IsolationForest(n_estimators=100, contamination=0.01)

    def detect_anomalies(self, df):
        """Deteksi anomali pada data"""
        features = np.log1p(df[['price', 'liquidity', 'volume_24h']])
        self.model.fit(features)
        anomalies = self.model.predict(features)
        df['anomaly_score'] = self.model.decision_function(features)
        return df[anomalies == -1]
