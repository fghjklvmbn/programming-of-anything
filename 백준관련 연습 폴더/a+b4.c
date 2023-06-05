#include<stdio.h>

int main() {
    int a, b;
    int sum = 0;
    int i = 0;

    while (i !=EOF)
    {
        scanf("%d %d", &a,&b);
        if(a>=10||b>=10 || a<=0||b<=0){
            return 1;
        }
        sum = a+b;
        printf("%d\n",sum);
        while (i == EOF) {
            return 0;
        }
    }
    return 0;
}