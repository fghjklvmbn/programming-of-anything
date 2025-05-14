#include<stdio.h>

int get_integer(){
    int value =0;
    printf("정수를 입력하시오 : ");
    scanf("%d", &value);
    return value;
}

int add(int x, int y){
    int result;
    result = x+y;
    return result;
}

int main(){
    // 함수로써의 중복사용 가능
    int x = get_integer();
    int y = get_integer();

    // 만든 add라는 함수에 x,y 함수 
    int sum = add(x,y);

    printf("%d", sum);
    return 0;
}