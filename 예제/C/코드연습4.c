#include<stdio.h>

int main(void){

    double a,b,c;
    double sum;
    sum =0;

    printf("상자의 가로, 세로, 높이를 한번에 입력 : ");
    scanf("%lf %lf %lf", &a,&b,&c);

    sum = a*b*c;
    printf("상자의 부피는 %lf 입니다.", sum);

    return 0;
}