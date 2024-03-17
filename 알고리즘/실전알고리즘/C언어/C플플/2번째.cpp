// 2. 정렬 : 선택정렬

// 숫자들을 오름차순으로 정렬하는 프로그램을 작성하기

#include<stdio.h>

int main(void){
    int i, j, min, index, temp;
    int array[10] = {1,10,5,8,7,6,4,3,2,9};

    // 시간복잡도 는 O(n^2) 
    for (int i = 0; i < 10; i++){
        min = 9999; // 아래 식을 충족하기 위한 초기화
        for (int j = i; j < 10; j++){ // j의 값을 i로 치환해 줌
            if (min > array[j]){ // min이 array배열보다 값이 낮다면
                min = array[j];  // 최저점 갱신하고
                index = j; // index를 j계수로 갱신
            }
        }

        // 값 교환
        temp = array[i];
        array[i] = array[index];
        array[index] = temp;
    }

    // 출력
    for (int i = 0; i < 10; i++){
        printf("%d ", array[i]);
    }

    return 0;
}

