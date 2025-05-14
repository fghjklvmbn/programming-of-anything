#include<stdio.h>

int main(void){
    int a[10]; 
    int result = 0;
    // 입력
    for (int i = 0; i < 10; i++){
        scanf("%d", &a[i]);
        if (a[i]%42==0){
            continue;
        } else {
            result++;
        }
    }

    // for (int i = 0; i < 10; i++){
    //     for (int j = 0; j <= i; j++){
    //         if (a[i] == a[j]){
    //             result--;
    //         }
    //     }
    // }
    

    // 결과
    if (result == 0){
        printf("1");
    } else {
        printf("%d", result);
    }
    return 0;
}