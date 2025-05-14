// #include <stdio.h>

// int main(){
// 	int a;
// 	scanf("%d", &a);
// 	int result = 1;
// 	for(int i = 1; i<=a; i++){
// 		result = i * result;
// 	}
	
// 	printf("%d", result);
	
// 	return 0;
// }


#include<stdio.h>

int factorial(int n){ // factorial 의 정의 비슷한것을 내리는 구조
	long result = 1;

	for(int i = 1; i<=n; i++){
		result *= i;
	}
	return result;
}

int main(void){
	int n;
	scanf("%d", &n);
	printf("%d", factorial(n)); // 구현
	return 0;
}