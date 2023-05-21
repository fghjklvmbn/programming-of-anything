#include <stdio.h>

// 원의 면적 파이(3.141592)^r^r

int main(void) {
    double pi = 3.141592;
    double sum =0;
    int r = 3;

    sum = pi*r*r;

    printf("길이가 3인 원의 넓이는 %f 입니다.", sum);
    return 0;

}


