#include<stdio.h>


int main(void){
    // 배열을 3번째 까지 = 0,1,2 -> [2]
    int a[2][3] ={0}; // 차례대로 도 개 걸 윷 모
    int A[2],B[2],C[2],D[2],E[2]; // 결과 저장용 배열

    for (int i = 0; i < 2; i++){
        int tmp = 0;
        for (int j = 0; j < 4; j++){
            scanf("%d", &a[i][j]); // 입력
            if(a[i][j] == 1){ // 1 감지
                tmp++; // 감지하면 tmp에 숫자를 올림
            }
        }
        if (tmp == 1){ // 1일경우 (0,0,0,1일 경우)
            A[i]++;
        } else if(tmp == 2){ // 2일경우(1,1,0,0)
            B[i]++;
        } else if (tmp == 3){ // 3일경우(1,1,1,0)
            C[i]++;
        } else if (tmp == 4){ // 4일경우(1,1,1,1)
            D[i]++;
        } else if (tmp == 0){ // 0일경우(0,0,0,0)
            E[i]++;
        }
    }

    // 출력
    for (int i = 0; i < 2; i++){
        if(A[i] == 1){
            printf("A");
        }else if (B[i] == 1){
            printf("B");
        }else if (C[i] == 1){
            printf("C");
        }else if (D[i] == 1){
            printf("D");
        } else if (E[i] == 1){
            printf("E");
        }
    }
    return 0;
}