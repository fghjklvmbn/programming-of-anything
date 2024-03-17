// 3. 정렬 : 버블정렬

// 숫자들을 옆 숫자와 비교해서 옮기는 방식으로 오름차순 만들기

#include<stdio.h>

int main(){
    int i, j, tmp;
    int a[10] = {1,10,5,8,7,6,4,3,2,9};

    for (int i = 0; i < 10; i++){
        // 비교를 위한 
        for (int j = 0; j < 9-i; j++){
            // 다음항목이 이번보다 작으면
            // 다음것과 바꿈 
            if(a[j] > a[j+1]){
                tmp = a[j];
                a[j] = a[j + 1];
                a[j+1] = tmp;
            }
        }
    }

    // 출력
    for (int i = 0; i < 10; i++){
        printf("%d ", a[i]);
    }
    

    return 0;
}