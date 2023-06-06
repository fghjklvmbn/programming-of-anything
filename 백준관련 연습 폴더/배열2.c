#include<stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int array[a];
    int array1[b];
    // 숫자 저장
    for (int i = 1; i <= a; i++){
        scanf("%d", &array[i]);
    }

    // 숫자 걸러내는 코드(문제있음)
    for (int i = 1; i < a; i++){
        if(array[i] < b){
            for (int j = 1; j < b; i++){
                array[i] = array1[j];
            }
        }
    }
    for (int i = 1; i <= b; i++){
        printf("%d ", array1[b]);
    }
    return 0;
}