#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define tax 0.2

int main(void) {
    const int month = 12;
    int a, sum, 연봉;

    printf("월급을 입력해주세요 : ");
    scanf("%d", &a);

    연봉 = a * month;
    sum = 연봉 * tax;

    printf("연봉은 %d만원이며 그로 인한 세금은 %d만원 입니다.", 연봉, sum);
    return 0;


}