#include<stdio.h>

int main(){
    long int n;

    scanf("%ld", &n);
    int a[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    int tmp = 0 , tmp1 = 0;

    // 최댓값 코드
    for(int i = 0;i<n;i++){
        if(i==0){
            tmp = a[i];
        }
        if(i>=1){
            if (tmp < a[i])
            {
                tmp = a[i];
            } else if(tmp == a[i]){
                tmp = tmp;
            } else {
                continue;
            }
        }   
    }
    
    

    // 최솟값 코드
    for(int j = 0; j<n;j++){
        if(j==0){
            tmp1 = a[j];
        }
        if(j>=1){
            if(tmp1>a[j]){
                tmp1 = a[j];
            } else if(tmp1 == a[j]){
                tmp1 = tmp1;
            } else {
                continue;
            }
        }

    }
    // 츨력
    printf("%d", tmp1);
    printf(" ");
    printf("%d", tmp);


    return 0;
}
