#include<stdio.h>

int main(void) {
    int a,b,c;
    int sum1, sum2, sum3, sum4;

    scanf("%d %d %d", &a, &b, &c);
    
    sum1 = (a+b)%c;
    sum2 = ((a%c) + (b%c))%c;
    sum3 = (a*b)%c;
    sum4 = ((a%c) * (b%c))%c;

    printf("%d\n", sum1);
    printf("%d\n", sum2);
    printf("%d\n", sum3);
    printf("%d\n", sum4);

    return 0;
}