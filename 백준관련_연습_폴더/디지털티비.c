// #include <stdio.h>

// // int up(){
    
// // }
// // int down(){
    
// // }
// char* upper(char a[], int n, int leng[], int leng_tmp){
//     int tmp;
//     a[n] = tmp;
//     a[n] = a[n+1];
//     a[n+1] = tmp;
//     leng[leng_tmp] = 4;
//     leng_tmp++;
//     return a;
// }

// char* downner(char a[], int n, int leng[], int leng_tmp){
//     int tmp;
//     a[n] = tmp;
//     a[n] = a[n-1];
//     a[n-1] = tmp;
//     leng[leng_tmp] = 3;
//     leng_tmp++;
//     return a;
// }

// int main(){
//     int channel_count;
//     scanf("%d", &channel_count);
//     char a[channel_count];
//     int select = 0;
//     int leng[501];
//     int leng_tmp = 0;
//     char 기준점[2][5] = {"KBS1", "KBS2"};
//     // 입력단
//     for (int i = 0; i<channel_count; i++) {
//         scanf("%s", &a[i]);
//     }

//     // 처리단
//     for (int i = 0; i<channel_count; i++) {
//         for (int j = 0; &a[j] == 기준점[0]; j++, leng_tmp++) {
//             leng[leng_tmp] = 1;
//             select = j;
//         }
//         for (int j = select; &a[0] == 기준점[0]; j--) {
//                 upper(a, j, leng, leng_tmp);
//         }
//         select = 0;
//         for (int j = 0; &a[j] == 기준점[1] ; j++, leng_tmp++) {
//             leng[leng_tmp] = 1;
//             select = j;
//         }
//         for (int j = select; &a[1] == 기준점[1]; j--) {
//                 upper(a, j, leng, leng_tmp);
//         }
//     }
//     // 출력단
//     for (int i = 0; i<leng_tmp; i++) {
//         printf("%d", leng[i]);
//     }
//     return 0;
// }

// 1과 4로만 쓰는 알고리즘
#include <stdio.h>
#include <string.h>

int main(){
    int a;
    scanf("%d", &a);
    int index[2];
    char b[11];
    for (int i =0; i<a; ++i) {
        scanf("%s", b);
        if (strcmp(b, "KBS1") == 0) {
            index[0] = i;
        } 
        if(strcmp(b, "KBS2") == 0){
            index[1] = i;
        }
    }
    int add = index[0]>index[1];
    for (int i = 0; i<index[0]; ++i) {
        printf("1");
    }
    for (int i = 0; i<index[0]; ++i) {
        printf("4");
    }
    for (int i = 0; i<index[1] + add; ++i) {
        printf("1");
    }
    for (int i = 0; i<index[1] + add - 1; ++i) {
        printf("4");
    }
    return 0;
}