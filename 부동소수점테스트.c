#include <stdio.h>

int main(void){
    float x = 1.234567890123456789;
    double y = 1.234567890123456789;

    printf("x의 자릿수는 %lu 입니다.\n", sizeof(x));
    printf("y의 자릿수는 %lu 입니다.\n\n", sizeof(y));

    printf("x = %30.25f\n", x);
    printf("x = %30.25f", y);

    return 0;
}