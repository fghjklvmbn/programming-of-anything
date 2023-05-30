#include<stdio.h>

int main(void) {
    int a,b, sum;
    sum = 0;
    scanf("%d", &a);
    for (b = 1; b < a+1; b++)
    {
        sum = sum + b;
    }
    printf("%d\n", sum);
}