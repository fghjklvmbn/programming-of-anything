#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    int f, g,h, i;
    int sum;

    scanf("%d", &a);
    scanf("%d", &f);
    
    sum = a*f;

    i = a * (f /100); // 첫자리
    
    h = a * (f/10 - (f/100)*10); // 중간자리 

    g = a * (f%10); // 끝자리


    printf("%d\n", g);
    printf("%d\n", h);
    printf("%d\n", i);
    printf("%d\n", sum);

    return 0;

}