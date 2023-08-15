#include<stdio.h>

int main(void) {
    int a;

    scanf("%d", &a); // a 입력

    for (int i = 1; i <= a; i++){
        for (int j = a; j > i; j--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}