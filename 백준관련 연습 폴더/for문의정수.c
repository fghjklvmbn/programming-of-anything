#include<stdio.h>

int main() {
    int n, sum;
    sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        sum = sum+i;
        for (int j = 0; j < sum; j++)
        {
            printf("별");
        }
    }
    
}