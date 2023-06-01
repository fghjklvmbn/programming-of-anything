#include<stdio.h>

int main() {
    int a,b;

    scanf("%d", &a); // a 입력

    for (int i = 1; i < a+1; i++)
    {
        for (int j = 0; j < a-1; j--)
        {
            printf(" ");
        }
        for (int k = 0; k < i; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}