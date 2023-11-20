#include<stdio.h>

// 기본 팩토리얼
int factorial(int n){
    if(n<=1) return (1);
    else return (n*factorial(n-1));
}

// 설명이 추가된 팩토리얼(결과는 같음)
int factorial_plus(int n){
    printf("factorial(%d)\n", n);
    if(n<=1) return (1);
    else return (n * factorial_plus(n-1));
}


// 반복적인 팩토리얼
int return_factorial(int n){
    int i, result = 1;
    for (i = 1; i <= n; i++){
        result = result * i;
    }
    return result;
    
}

int main(void){
    printf("%d\n",factorial(5)); // 120
    printf("%d\n", factorial_plus(5)); // 120
    printf("%d\n", return_factorial(5)); // 120
    return  0;
}