#include<stdio.h>
// void 쓰임새  1. 포인터사용(뭐든 가리키는게 가능)   2. 반환값 
int main(void){
    int arr[3] = {0,1,2};
    printf("배열의 이름 : %p\n", arr);
    printf("첫번쨰 요소 : %p\n", &arr[0]);
    printf("두번쨰 요소 : %p\n", &arr[1]);
    printf("세번쨰 요소 : %p\n", &arr[2]);

    int arr1[3] = {1,2,3};
    double arr2[3] = {1.1,2.2,3.3};

    printf("%d \t %lf\n", *arr1, *arr2);
    *arr1 += 100;
    *arr2 += 100.5;

    printf("%d \t %lf\n", arr1[0], arr2[0]);


    int num1 = 10, num2 = 20, num3 = 30;

    int *arr3[3] = {&num1, &num2, &num3};

    printf("%d \t %d \t %d\n\n", *arr3[0], *arr3[1], *arr3[2]);

    int a[5] = {1,2,3,4,5};
    int *ptr = &a[0]; // a의 주소값을 가리킴 = 포인터에 주소값만, 포인터 뺴면 원래값

    for (int i = 0; i < 5; i++){
        ptr[i] += 2;
    }

    for (int i = 0; i < 5; i++){
        printf("%d\n", a[i]);
    }

    int a1[5] = {1,2,3,4,5};
    int *ptr1 = &a1[0];

    for (int i = 0; i < 5; i++){
        ptr += 2;
        ptr++;
        printf("a[%d] : %d\n", i, a1[i]);
        printf("%d\n\n", ptr1[i]);
    }
    
    




}