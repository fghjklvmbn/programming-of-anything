#include<stdio.h>

int main(){
    // n,m 변수 추가 및 입력받기
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    // 중요한 배열집합 + 초기화
    int sum[n];
    for (int i = 1; i <= n; i++){
        sum[n] = 0;
    }
    // 나머지 필요 변수 초기화
    int j,k,l;
    // 메인 분류 코드
    for (int i = 1; i < m+1; i++){
        scanf("%d %d %d", &j,&k,&l);
        if (j==k){
            sum[j] = 0;
            sum[j] = l;
        }else if (j<k){
            for(int j; j<=k+1; j++){
                sum[j] = 0;
            }
            sum[j] = l;
        } else if(j>k){
            return 1;
        }
    }
    for (int x = 1; x <= n; x++){
        printf("%d ", sum[x]);
    }
    return 0;
}