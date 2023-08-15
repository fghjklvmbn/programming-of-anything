#include<stdio.h>

int main(void) {
    //변수 선언 및 값 초기화
    int x,y, tmp;
    x = 10;
    y = 20;
    tmp = 0;
    int check ;
    //x,y 출력
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    // 교환 여부 설정
    printf("x와 y의 값을 교환하시겠습니까?(1:예, 2:아니요) : ");
    scanf("%d", &check);

    if (check == 1) // 1로 입력했을 경우
    {
        tmp = x;
        x = y;
        y = tmp;
        printf("x = %d\n", x);
        printf("y = %d\n", y);
    } else if(check == 2){ // 2로 입력했을 경우
        printf("x = %d\n", x);
        printf("y = %d\n", y);
    } else { // 다른 숫자를 입력했을 경우
        printf("1, 2중에 하나를 고르시오(프로그램을 다시 실행하시오)");
        return 1;
    }
    return 0;
}