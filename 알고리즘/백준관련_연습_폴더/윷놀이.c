#include<stdio.h>

// 이차원 배열 : i가 1일때 0배열이 1이라면 "A" 출력

int main(void){
    // 배열을 3번째 까지 = 0,1,2 -> [2]
    int a[3][4] ={0}; // 차례대로 도 개 걸 윷 모
    int tmp[5] = {0};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &a[i][j]); // 입력
            if(a[i][j] == 1) {
                tmp[i]++;
            }
        }
    }
    for (int i = 0; i < 3; i++){
        if (tmp[i] == 1){
                printf("C\n");
            } else if (tmp[i] == 2){
                printf("B\n");
            } else if (tmp[i] == 3){
                printf("A\n");
            } else if (tmp[i] == 4){
                printf("E\n");
            } else if (tmp[i] == 0){
                printf("D\n");
            }
        } 

    return 0;
}