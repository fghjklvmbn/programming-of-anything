// 4. 정렬 : 삽입정렬


// 각 숫자를 적절한 위치로 삽입하는 방법, 필요할 때만 위치를 바꿈

#include<stdio.h>

int main(void){
    int i,j, tmp;

    int array[10] = {1,10,5,8,7,6,4,3,2,9};

    for (int i = 0; i < 9; i++){
        j = i;
        // j가 0보다 크거나 array[j]가 다음항목보다 클때 조건문 작동
        while (j >= 0 && array[j] > array[j+1]){
            tmp = array[j];
            array[j] = array[j+1];
            array[j+1] = tmp;
            j--;
        }
    }

    for (int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }
    return 0;
}

