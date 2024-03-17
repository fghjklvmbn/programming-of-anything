// 4. 정렬 : 삽입정렬


// 문제 : 삽입정렬을 수행하는 과정을 일일이 출력하는 프로그램

#include<stdio.h>

int main(void){
    int i,j, tmp, n;
    scanf("%d", &n);
    int array[n];

    for (int i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    printf("\n\n");
    for (int i = 0; i < n-1; i++){
        j = i;
        for (int k = 0; k < j; k++){
            printf("%d ", array[k]);
        }


        // j가 0보다 크거나 array[j]가 다음항목보다 클때 조건문 작동
        while (j >= 0 && array[j] > array[j+1]){
            tmp = array[j];
            array[j] = array[j+1];
            array[j+1] = tmp;
            j--;
        }
        printf("\n");
    }
    
    printf("\n");

    for (int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
