#include<stdio.h>

int main(void) {

    int x,y,z;
    scanf("%d", &x); // x = 배열의 갯수
    scanf("%d", &y); // y = 기준수 (y보다 작아야함)
    int arr[x]; // 배열정의

    for(int i = 0; i<x; i++){
        scanf("%d", &arr[i]);
    }    
    int j =0;
    int k =0;

    int result[x];

    //숫자 걸러내는(필터)코드
    for (int j = 0; j < x; j++)
    {
        if (arr[j]<y){
            printf("%d ", arr[j]);
        } else {
            continue;
        }
    }

    // for(int k = 0; k<x; k++){
    //     printf("%d ", result[j]);
    // }

    return 0;
}