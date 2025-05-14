#include<stdio.h>

int main(void) {
    int x = 10, y=10;
    

    printf("x의 값 : %d", x);
    printf("\n전위연산자 사용후 결과(x) : %d", x++);
    printf("\n후위연산자 사용후 결과(x) : %d", ++x);

    printf("\ny의 값 : %d", y);
    printf("\n전위연산자 사용후 결과(y) : %d ", y++);
    printf("\n후위연산자 사용후 결과(y) : %d", ++y);

    return 0;
}