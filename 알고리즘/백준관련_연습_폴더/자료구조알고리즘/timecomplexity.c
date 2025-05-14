#include<stdio.h>

int main(){
    int a = 0,n;
    scanf("%d", &n);
    // logn
    for (int i = 1; i < n; i=i*2){
        a += 1;
    }
    printf("%d", a);
    return 0;
} 