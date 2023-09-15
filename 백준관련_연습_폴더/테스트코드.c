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

// 1079번
// 1 번풀이
// #include<stdio.h>

// int main(void) {
//     char a;
//     scanf("%c", &a);
//     printf("%c\n", a);
//     while (a!= 'q'){
//         scanf("%s", &a);
//         printf("%c\n", a);
//     }
//     return 0;
// }

// 2번 풀이
// q 입력될 때까지 계속 출력

// #include<stdio.h>

// int main(){
//     char a;
//     for (int i = 0; a != 'q'; i++){
//         scanf("%c", &a);
//         printf("%c", a);
//     }
//     return 0;
// }


// 1, 2, 3, 4, 5 ... 를 순서대로 계속 더해 합을 만들어가다가,
// 입력된 정수와 같거나 커졌을 때, 마지막에 더한 정수를 출력한다.

#include<stdio.h>

int main(){
    int h, b, c, s;
    double sum = 0;
    scanf("%d %d %d %d", &h, &b, &c, &s);
    double tmp = (h*b*c*s)/8;
    sum = (tmp/1024)/1000;

    printf("%.1f MB", sum);
    return 0;
}

// int sub(int d, int sum){
//     for (int i = 0; sum >= d; i++){
        
//     }
//     return result;
// }