#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define size 2
int main(void) {
    int a[size];
    int i;

    for(i=0;i<size;i++){
        printf("%d번째 숫자를 입력해주세요 : ", i);
        scanf("%d", &a[i]);
    }
    printf("\n\n*****사칙 연산 결과*****\n");
    printf("덧셈 결과 = %d\n", a[0]+a[1]);
    printf("뺄셈 결과 = %d\n", a[0]-a[1]);
    printf("나눗셈 결과 = %d\n", a[0]/a[1]);
    printf("곱셈 결과 = %d\n", a[0]*a[1]);

    return 0;
}