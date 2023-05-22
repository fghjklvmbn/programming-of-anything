#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void){
    int a,b,c;
	a,b,c = 0;
	double d;
	
	printf("숫자를 입력하시오 : ");
	scanf("%d", &a);
	printf("제곱을 할 횟수를 입력하시오 : ");
	scanf("%d", &b);
	c = pow(a,b);

	d = sqrt(a);
	printf("계산결과, %d 입니다.\n", c);
	printf("제곱근 결과는 %0.f 입니다.", d);
	return 0;
}