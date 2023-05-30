#include<stdio.h>

int main(void) {
    int a,b, i;
    scanf("%d", &a);
    for (i = 0; i < a; i++)
    {
        b = 1;
        b = b+i;
        printf("%d\n", b);
    }
    printf("%d\n", b);
}