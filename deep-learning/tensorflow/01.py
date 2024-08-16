import tensorflow as tf
import numpy as np
import matplotlib.pyplot as plt

# 데이터 생성
np.random.seed(0)
X = np.linspace(0, 10, 100)
y = 2 * X + 1 + np.random.normal(0, 1, 100)

# 모델 구성
model = tf.keras.Sequential([
    tf.keras.layers.Dense(1, input_shape=(1,))
])

model.compile(optimizer='adam', loss='mean_squared_error')

# 모델 학습
history = model.fit(X, y, epochs=100, verbose=0)

# 결과 시각화
predicted = model.predict(X)

plt.scatter(X, y, label='True Data')
plt.plot(X, predicted, color='red', label='Predictions')
plt.legend()
plt.show()

# 모델의 가중치와 절편 확인
weights, biases = model.layers[0].get_weights()
print(f"Weights: {weights[0][0]}, Biases: {biases[0]}")