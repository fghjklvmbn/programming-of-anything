#include<stdio.h>

int main(void) {
    
    double a;

    printf("실수를 입력하시오 : ");
    scanf("%lf", &a);

    printf("실수형식으로는 %f 입니다.\n", a);
    printf("지수형식으로는 %e 입니다.\n", a);

    return 0;

}