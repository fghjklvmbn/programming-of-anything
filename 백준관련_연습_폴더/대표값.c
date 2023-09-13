#include<stdio.h>

int main(){
    int a[5];
    int avg = 0;
    int sum = 0;
    for (int i = 0; i<5; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = sum/5;

    printf("평균 : %d", avg);

    return 0;
}