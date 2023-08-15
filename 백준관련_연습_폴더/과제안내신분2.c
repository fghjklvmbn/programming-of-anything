#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b);

int main(void){ 
    int a[30] = {0};
    int b = 1;

    for(int i =0; i<30; i++){
        a[i] = b;
        b = b + 1;
    }

    int d;
    int c[28] = { 0 };
    c[0] = 1;
    for (int i = 0; i < 28; i++){
        if (scanf("%d", &d)){
            c[d] = 1;
        }else if(d ==0){
            break;
        }
    }

    int n = 0;
    int result[30];
    for (int i = 0; i < 30; i++){
        if(c[i] == 0){
            result[n] = i;
            n++;
        }    
    }

    if (result[0] > result[1]){
        int tmp;
        tmp = result[0];
        result[0] = result[1];
        result[1] = tmp;
    }
    
    qsort(result, 30, sizeof(result[0]), compare);

    for (int i = 0; i < 30; i++){
        if (result[i] == 0){
            continue;
        } else{
            printf("%d\n", result[i]);
        }
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