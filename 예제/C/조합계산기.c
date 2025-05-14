#include<stdio.h>
// (n-r)펙토리얼*r팩토리얼 / r팩토리얼
int factorial(int n){
    int result = 1;
    for (int i = 0; i < n; i++){
        result *= i;
    }
    return result;
}

double result(int tmp, int c){
    double result;

    result = factorial(tmp)*factorial(c) / factorial(tmp);
    
    return result;
    
}

int main(){
    int a,b,c;
    int tmp;

    printf("숫자를 입력해주세요");
    scanf("%d %d", &a, &b);

    tmp = a-b;
    c = factorial(tmp);


    printf("%d\n%d\n%f\n", c, factorial(b), result(tmp, c));


    return 0;
}