#include<stdio.h>

int sum(int tmp[]){
    int A[5] = {0};

    for (int i = 0; i < 5; i++){
        if (tmp[i] == 1){ // 1일경우 (0,0,0,1일 경우)
            A[0] = 1;
        } else if(tmp[i] == 2){ // 2일경우(1,1,0,0)
            A[1] = 1;
        } else if (tmp[i] == 3){ // 3일경우(1,1,1,0)
            A[2] = 1;
        } else if (tmp[i] == 4){ // 4일경우(1,1,1,1)
            A[3] = 1;
        } else if (tmp[i] == 0){ // 0일경우(0,0,0,0)
            A[4] = 1;
        }
    }

    return A;
}

// 이차원 배열 : i가 1일때 0배열이 1이라면 "A" 출력 

int print(int a[]){
    if (a[0] == 1){
       printf("A\n");
    } else if (a[1] == 1){
       printf("B\n");
    } else if (a[2] == 1){
       printf("C\n");
    } else if (a[3] == 1){
       printf("D\n");
    } else if (a[4] == 1){
       printf("E\n");
    } 
    

    return 0;
}


int main(void){
    // 배열을 3번째 까지 = 0,1,2 -> [2]
    int a[3][4] ={0}; // 차례대로 도 개 걸 윷 모
    int tmp[5] = {0};
    int b[5] = {0};
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 4; j++){
            scanf("%d", &a[i][j]); // 입력
            if(a[i][j] == 1) {
                tmp[i]++;
            }
        }
        b[5] = sum(tmp); 
    }
    print(b);

    return 0;
}