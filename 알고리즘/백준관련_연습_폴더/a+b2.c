#include<stdio.h>

int main() {
    int a, b, t, sum;
    sum = 0;


    scanf("%d", &t);
    for (int i = 1; i < t+1; i++)
    {
        scanf("%d %d", &a, &b);
        sum = a+b;
        printf("Case #%d: %d\n", i, sum);
    }
    return 0;
}