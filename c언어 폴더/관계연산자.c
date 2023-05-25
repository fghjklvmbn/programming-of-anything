#include <stdio.h>

int main() {
    int x,y;
    printf("두 숫자를 입력하시오 : ");
    scanf("%d%d", &x, &y);

    printf("관계연산자 == 여부 : %d", x==y);
    printf("\n관계연산자 != 여부 : %d", x!=y);
    printf("\n관계연산자 >= 여부 : %d", x>=y);
    printf("\n관계연산자 <= 여부 : %d", x<=y);
    printf("\n관계연산자 < 여부 : %d", x<y);
    printf("\n관계연산자 > 여부 : %d", x>y);
    
    return 0;

}