#include<stdio.h>

int main(){
    int n1;
    scanf("%d", &n1);
    int result = 0;

    for (int n = 1; n <= n1; n++){
        if(n%3 == 0 || n%5 == 0){
            result = result + n;
        }
    } 
    printf("%d", result);
    return 0;
}