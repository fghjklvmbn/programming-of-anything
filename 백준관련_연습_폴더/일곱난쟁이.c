#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b);

int main(void){
    int d[9];
    int sum = 0;
    int over = 0;
    for (int i = 0; i < 9; i++){ 
        scanf("%d", &d[i]);
    }
    qsort(d, 9, sizeof(d[0]), compare);

    for (int i = 0; i < 9; i++){
        sum += d[i];        
    }
    over = sum - 100;
    // 두수 찾기
    int f = 0;
    int s = 0;
    for (int i = 0; i < 9; i++){
        for (int j = 0; j < 9; j++){
            // over가 된 수를 정확하게 
            if ((d[i]+d[j]) == over){
                f = i;
                s = j;
                break;
            }
        }
    }
    int d1[7];
    int j = 0;
    for (int i = 0; i < 9; i++){
        if(i != f && i != s){
            d1[j] = d[i];
            j++; 
        }
    }
    
    
    for (int i = 0; i < 7; i++){
        printf("%d\n", d1[i]);
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