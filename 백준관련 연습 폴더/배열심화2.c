#include<stdio.h>

int main(){
    long int n;

    scanf("%ld", &n);
    int a[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }

    int max_int;
    int min_int;

    // 최댓값 코드
    for(int i = 0;i<n;i++){
        if(i>=1){
            if(a[i-1]<a[i]){
                max_int = a[i];
            } else {
                continue;
            } 
            
        if (a[i-1]<=a[i] || a[i-1]==a[i]) {
                continue;
            }
        }
    }
    
    // int sum = 0;
    // //최솟값 코드
    for(int i = 0; i<n;i++){
        if(a[i-1]>a[i]){
                min_int = a[i];
            }else 
            
        if(a[i-1]>a[i] || a[i-1]==a[i]) {
                continue;
        }                                                            
    }
    // 츨력
    printf("%d", min_int);
    printf(" ");
    printf("%d", max_int);


    return 0;
}