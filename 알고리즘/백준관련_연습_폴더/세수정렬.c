#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b);

int main(void){
    int a[3];

    for (int i = 0; i < 3; i++){
        scanf("%d", &a[i]);
    }
    
    qsort(a, 3, sizeof(a[0]), compare);

    for (int i = 0; i < 3; i++){
        printf("%d ", a[i]);
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