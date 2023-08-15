#include<stdio.h>
#define 평 3.3058

int main(void) {
    int a;
    double sum;

    printf("평을 입력해주세요 : ");
    scanf("%d", &a);

    sum = a * 평;
    printf("%lf 평방미터입니다.", sum);

    return 0;
}