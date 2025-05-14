#include<stdio.h>

#define max 5;

int get_max_score(int n, int scores[]){
    int i, large;
    large = scores[0];
    for (int i = 1; i < n; i++){
        if(large < scores[i]){
            large = scores[i];
        }
    }
    return large;
}

int main(){
    int a = max;
    int score[a];
    for (int i = 0; i < a; i++){
        scanf("%d", &score[i]);
    }
    int result;
    result = get_max_score(a, score);
    printf("%d", result);
    

    return 0;
}