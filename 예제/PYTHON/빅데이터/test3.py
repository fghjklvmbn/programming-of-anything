import seaborn as sns
import matplotlib.pyplot as plt

# 데이터 로드
iris = sns.load_dataset("iris")

# 산점도 (상관관계 분석)
sns.pairplot(iris, hue="species")
plt.show()

# 히트맵 (상관관계 시각화)
corr = iris.corr()
sns.heatmap(corr, annot=True, cmap='coolwarm')
plt.title("Correlation Matrix")
plt.show()