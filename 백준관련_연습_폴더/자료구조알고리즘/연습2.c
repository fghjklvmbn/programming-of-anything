// https://blog.encrypted.gg/922

#include<stdio.h>
#include<math.h>

// n이 제곱수라면 1을 반환하고 아니면 0을 반환하는 프로그램 작성

// 주어진 길이 N의 int배열 arr에서 합이 100 인 서로 다른위치
// 의 두 원소가 존재하면 1 않으면 0
int main(){
    int n;
    int arr[n];
    int tmp;

    // 배열을 불러와서 원소끼리 비교
    // 제일 큰것부터 고르고, 작은원소끼리 더해서 100이 나오면 됨
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++){
        if(i < 1 || tmp < arr[i]) {
            tmp = arr[i];
            if(arr[i] + tmp == 100){
                printf("1");
            }
        } else {
            continue;
        }
    }
    
    
    


    return 0;
}