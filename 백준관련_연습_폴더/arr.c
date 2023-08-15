#include<stdio.h>
#include<stdlib.h>

int main(){
	// 숫자 정하기(변수 설정 및 초기화)
	int n,m;
	scanf("%d %d", &n, &m);
	
	int a[n][m];
	int b[n][m];
	int result[n][m];
	
	// 입력단
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	
	// 계산
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			result[i][j] = a[i][j]+ b[i][j];
		}
	}

	
	// 출력단
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	return 0;
}
