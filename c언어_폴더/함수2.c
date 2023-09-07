#include<stdio.h>

int max(int x, int y){
    if(x < y){
        return y;
    } else{
        return x;
    }
}

int main(){
    int a;
    int b;
    printf("정수를 입력하시오 : ");
    scanf("%d", &a);
    printf("정수를 입력하시오 : ");
    scanf("%d", &b);
    int value = max(a,b);
    printf("더 큰값은 %d 입니다.", value);

    return 0;
}