#include<stdio.h>

int main(void) {
    int a,b,c,b_tmp;

    scanf("%d %d %d", &a,&b,&c);
    if(a<b && b < c){b_tmp = c;}
    if(a<b && b > c){b_tmp = b;}
    if(a>b && a > c){b_tmp = a;}

    printf("%d", b_tmp);
    return 0;
}