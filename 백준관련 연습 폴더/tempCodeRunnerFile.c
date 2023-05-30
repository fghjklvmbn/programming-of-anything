#include<stdio.h>

int main() {
    int a,b, n; // a = 바이트값
    
    scanf("%d", &a);

    if (a>=4 || a<=1000)
    {
        b = a/4;
        for (int i = 0; i < b; i++)
        {
            printf("long ");
        }
        printf("int");
    } else {
        return 1;
    }
    return 0;
}