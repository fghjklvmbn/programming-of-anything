// #include <stdio.h>

// int main(void) {
//     int x,y,z;
//     int sum = 0;

//     printf("3개의 정수를 입력하시오 : ");
//     scanf("%d %d %d", &x, &y, &z);
//     sum +=x;
//     sum +=y;
//     sum +=z;
//     printf("3개의 정수값의 합은 %d 입니다.", sum);

//     return 0 ;
// }

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    //변수 지정 및 초기화
    int x, y;
    int sum;
    scanf("%d", &x);
    scanf("%d", &y);
    
    // 덧셈후 sum 변수에 저장
    sum = x+y;
    // sum 값 출력
    printf("%d", sum);
    
    return 0;
}