#include<stdio.h>

int main(void) {
    int val, sum, a,b, t; //val = 전체가격   sum = val값과 비교/전체 가격   a,b= 가격,수량     t= 갯수
    sum = 0;
    scanf("%d", &val);
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a, &b);
        sum = sum+(a*b);
    }
    

    if (sum == val)
    {
        printf("Yes");
    } else {
        printf("No");
    }
    
    return 0;
}