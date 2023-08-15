#include<stdio.h>
#include<math.h>

int main(void) {
    int a,b;
    double jul;

    a=0;
    b=0;

    printf("질량 : ");
    scanf("%d", &a);
    printf("속도 : ");
    scanf("%d", &b);

    jul = a*pow(b,2) / 2.0;
    printf("운동에너지 : %lf", jul) ;

    return 0;
}