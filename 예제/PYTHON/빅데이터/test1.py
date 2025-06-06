import seaborn as sns
import matplotlib.pyplot as plt
import pandas as pd

# 샘플 데이터 로드
df = sns.load_dataset("tips")

# 히스토그램 (분포 분석)
sns.histplot(df['total_bill'], kde=True, color="skyblue")
plt.title("Total Bill Distribution")
plt.xlabel("Total Bill")
plt.ylabel("Frequency")
plt.show()

# 산점도 (상관관계 분석)
sns.scatterplot(x="total_bill", y="tip", hue="smoker", data=df)
plt.title("Total Bill vs Tip")
plt.show()
