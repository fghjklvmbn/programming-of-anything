#include<stdio.h>

int main() {
    int n, sum;
    sum = 0;
    scanf("%d", &n);
    for (int i = 1; i < n+1; i++)
    {
        sum = sum+i;
    }
    printf("%d", sum);
    return 0;
}