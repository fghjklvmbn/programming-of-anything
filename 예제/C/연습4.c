#include<stdio.h>

int* getnum(){
    static int arr[5] = {1,2,3,4,5}; // 변경불가
    return arr; // 배열 리턴
}

int main(){
    int* num = getnum(); // 포인터로 배열 받기
    for (int i = 0; i < 5; i++){
        printf("%d ", num[i]); // 배열 출력 
    }
    return 0;
}