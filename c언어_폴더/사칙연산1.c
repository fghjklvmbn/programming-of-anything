#include <stdio.h>

int main(void) {
    int x,y,result;

    printf("두 숫자를 입력하시오 : ");
    scanf("%d %d", &x, &y);
    
    int result1 = x+y;
    int result2 = x-y;
    int result3 = x/y;
    int result4 = x*y;
    int result5 = x%y;

    int i;

    printf("%d\n",result1);
    printf("%d\n",result2);
    printf("%d\n",result3);
    printf("%d\n",result4);
    printf("%d\n",result5);
    
    return 0;
}