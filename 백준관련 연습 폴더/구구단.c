#include<stdio.h>

int main(void) {
    int a,b, sum;
    
    scanf("%d", &a);

    for(int i =1;i<10;i++) {
        sum = a*i;
        printf("%d * %d = %d\n", a,i,sum);
    }

    return 0;
}