#include<stdio.h>
#include<time.h>

int main(void){
    // 시분초 간단 예제
    int a;

    a = time.now();

    int n;
    scanf("%d", &n);
    int min_result = n/60;
    int min_tmp = min_result%60;
    int hr_result = min_result / 24;
    int sec_result = n%60;
    

    printf("%d 시 %d 분 %d 초\n",hr_result, min_tmp, sec_result);
    

    return 0;
}