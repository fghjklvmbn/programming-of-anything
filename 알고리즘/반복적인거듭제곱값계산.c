#include<stdio.h>

// 반복적인 함수 7.17초
double slow_power(double x, int n){
    int i;
    double result = 1.0;

    for (int i = 0; i<n; i++){
        result = result * x;
    }
    return (result);
}

// 순환적인 함수 0.47초
double power(double x, int n){
    if(n==0) return 1;
    else if ((n%2)==0){
        return power(x*x, n/2);
    }else return x*power(x*x, (n-1)/2);
    
}

int main(){
    printf("%.2f\n", slow_power(12.4, 4));
    printf("%.2f", power(12.4, 4));
    return 0;
}