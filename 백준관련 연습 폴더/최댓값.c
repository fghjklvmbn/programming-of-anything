
#include<stdio.h>
#define n 9

int main(){

    int a[n];

    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    
    int max = 0;
    int tmp = 0;
    // 최댓값 코드
    for(int i = 0;i<n;i++){
        if(i==0){
            max = a[i];
            tmp += 1;
        }
        if(i>=1){
            if (max < a[i]){
                max = a[i];
                tmp += 1;
            } else if(max == a[i]){
                max = max;
                tmp += 1;
            } else {
                continue;
                tmp += 1;
            }
        }
    }
    printf("%d\n", max);
    printf("%d", tmp);
    return 0;
}
