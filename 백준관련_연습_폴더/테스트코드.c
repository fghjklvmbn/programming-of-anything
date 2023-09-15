// #define _CRT_SECURE_NO_WARNINGS
// #include <stdio.h>

// int main(void)
// {
//     int n, m;
//     scanf("%d %d", &n, &m);

//     int box[101] = { 0 };
//     int I, J, K;
//     for (int i = 0; i < m; i++) {
//         scanf("%d %d %d", &I, &J, &K);
//         int in = J - I + 1;
//         for (int j = 0; j < in; j++) {
//             box[I] = K;
//             I++;
//         }
//     }

//     for (int k = 1; k <= n; k++) {
//         printf("%d ", box[k]);
//     }

//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int compare(const void *a, const void *b);

// int main(void){

//     int arr[30];
//     int tmp;

//     for (int i = 0; i < 28; i++){ 
//         scanf("%d", &arr[i]);
//     }
    
//     qsort(arr, 30, sizeof(arr[0]), compare);

//     for (int i = 0; i < 28; i++)
//     {
//         printf("%d ", arr[i]);
//     }
    
//     return 0;
// }

// int compare(const void *a, const void *b){
//     if(*(int*)a > *(int*)b){
//         return 1;
//     } else if(*(int*)a < *(int*)b){
//         return -1;
//     } else {
//         return 0;
//     }
// }

#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", (!a&&!b)||!(a&&b)); //  교집합만 없고 다 있는거 = XOR 연산 
    return 0;
}