#include<stdio.h>
#include<stdlib.h>
int compare(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;
    if(num1<num2)
        return -1;
    if(num1>num2)
        return 1;
    return 0;
}

int main(){
    int a[5];
    int avg = 0;
    int sum = 0;
    for (int i = 0; i<5; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    avg = sum/5;
    qsort(a,sizeof(a)/sizeof(int), sizeof(int),compare);
    printf("%d\n", avg);
    printf("%d\n", a[2]);

    return 0;
}