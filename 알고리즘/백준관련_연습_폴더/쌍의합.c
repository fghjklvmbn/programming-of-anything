#include<stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        scanf("%d", &b);
        for (int j = 0; j < b; j++){
            printf("Pairs for %d: %d %d\n",b ,i, j);
            continue;  
        } 
    }
    return 0;
}