import matplotlib.pyplot as plt
import numpy as np

# 데이터 생성
x = np.linspace(0, 10, 100)
y = np.sin(x)

# 차트 그리기
plt.figure(figsize=(8, 4))
plt.plot(x, y, label="Sine Wave", color="blue", linestyle="--")
plt.title("Sine Wave Plot")
plt.xlabel("X-axis")
plt.ylabel("Y-axis")
plt.legend()
plt.grid(True)
plt.show()