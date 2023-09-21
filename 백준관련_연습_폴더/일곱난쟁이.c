#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b);

int main(void){
    int d[9];
    int sum = 0;
    int over = 0;
    for (int i = 0; i < 9; i++){ 
        scanf("%d", &arr[i]);
    }
    qsort(d, 9, sizeof(d[0]), compare);

    for (int i = 0; i < 9; i++){
        printf("arr값 : %d\n", arr[i]);
        sum += arr[i];
        printf("sum 값 : %d\n", sum);
    }
    
    
    return 0;
}

int compare(const void *a, const void *b){
    if(*(int*)a > *(int*)b){
        return 1;
    } else if(*(int*)a < *(int*)b){
        return -1;
    } else {
        return 0;
    }
}