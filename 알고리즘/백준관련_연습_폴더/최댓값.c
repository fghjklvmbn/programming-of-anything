
#include<stdio.h>
#define n 9

int main(){

    int a[n];
    
    int tmp, max = 0;

    // 최댓값 코드
    for(int i = 0;i<n;i++){
        // 입력부분
        scanf("%d", &a[i]);

        // 분류과정 설명: max 값이 a[i]보다 크면 해당사항 안되어 패스하고 그 반대의 상황이면 밑의 반복문으로 max값을 갱신하고 i+1값을 tmp로 넣는다.
        if(max < a[i]){
            max = a[i];
            tmp = i + 1;
        }   
    }
    printf("%d\n", max);
    printf("%d", tmp);
    return 0;
}