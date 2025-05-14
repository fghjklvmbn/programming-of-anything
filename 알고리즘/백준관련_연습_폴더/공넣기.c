// 체감상 제일 어려웠던 알고리즘

#include<stdio.h>

int main(){
    // n,m 변수 추가 및 입력받기
    int n, m;
    scanf("%d %d", &n, &m);
    // 전체 배열에 대한 0으로 초기화
    int sum[101] = {0};   
    // 나머지 필요 변수 초기화
    int J,K,L;
    // 메인 분류 코드
    for (int i = 0; i < m; i++){
        scanf("%d %d %d", &J,&K,&L);
        int in = K-J+1;
        for(int j = 0; j < in; j++){
            // J의 계수증가 및 반복초기화
            sum[J] = L;
            J++;
        }
    }
    for (int x = 1; x <= n; x++){
        printf("%d ", sum[x]);
    }
    return 0;
}