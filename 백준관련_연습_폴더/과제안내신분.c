#include<stdio.h>
#include<stdlib.h>


int compare(const void *a, const void *b);

int main(void){

    int arr[30];
    int tmp;

    for (int i = 0; i < 28; i++){ 
        scanf("%d", &arr[i]);
    }
    
    qsort(arr, 29, sizeof(arr[0]), compare);

    for (int i = 0; i < 28; i++)
    {
        printf("%d ", arr[i]);
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

int result(void){


}