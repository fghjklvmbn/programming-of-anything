#include<stdio.h>

int main() {
    int a,b;

    scanf("%d", &a); // a 입력

    for (int i = 1; i < a+1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        
        printf("\n");
    }
    return 0;
}