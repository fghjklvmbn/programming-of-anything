#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    for (int i = a; i > 0; i--){
        for (int k = i; k < a; k++){
            printf(" ");   
        }
        for (int j = 1; j <= i; j++){
            printf("*");
            if (j==i){
                printf("\n");
            }  
        }
    }   
    return 0;
}