#include<stdio.h>

#define max 100;

int get_max_score(int n, int scores[100]){
    int i, large;
    large = scores[0];
    for (int i = 1; i < n; i++){
        if(large == scores[i]){
            large = scores[i];
        }
    }
    return large;
}

int main(){
    int a = max;
    int scores[100];
    for (int i = 0; i < a; i++){
        scanf("%d", &scores[100]);
    }
    int result;
    result = get_max_score(a, scores[100]);
    printf("%d", result);
    

    return 0;
}