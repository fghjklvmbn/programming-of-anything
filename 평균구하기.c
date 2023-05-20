#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int a[10];
	int i;
	int sum = 0;
	int avg;

	for (i = 0; i < 10; i++) {
		printf("숫자를 입력해주세요 : ");
		scanf("%d", &a[i]);
		sum += a[i];
	}

	avg = sum / 10;

	printf("10명의 학생의 평균 점수는 %d 입니다.", avg);

}
