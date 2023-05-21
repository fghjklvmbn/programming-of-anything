#include <stdio.h>
#include <limits.h>

//오버플로우 테스트
int main(void) {
    //최댓값 초기화
    short a = SHRT_MAX;
    unsigned short b = USHRT_MAX;

    a = a+1;
    b = b+1;

    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}