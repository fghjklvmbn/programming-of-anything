#include<stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    int x,y;
    for (int i = 0; i < a; i++){
        scanf("%d %d", &x, &y);
        if (x >= y){
            printf("MMM BRAINS\n");
        } else{
            printf("NO BRAINS\n");
        }
    }   
    return 0;
}