#include<stdio.h>

int main(void) {

    int x,y,z;
    scanf("%d", &x); // x = 배열의 갯수
    scanf("%d", &y); // y = 기준수 (y보다 작아야함)
    int arr[x]; // 배열정의

    for(int i = 0; i<x; i++){
        scanf("%d", &arr[i]);
        if(arr[i] < y){
            z += 1;
        }
    }    

    printf("%d", z);


    return 0;
}