// #include<stdio.h>

// int main(void){
//     // 입력부분
//     int a,b;
//     int tmp = 0;
//     int arr[tmp];
    
//     while (scanf("%d %d", &a, &b) != 0) {
//         if (a<b) {
//             arr[tmp] = 1;
//         } else if (a>b) {
//             arr[tmp] = 0;
//         } else if (a>0 && b>0 && a==b){
//             arr[tmp] = 2;
//         } else if(a == 0 && b == 0){
//             break;
//         }
//         tmp++;
//     }

//     for (int i=0; i<tmp; i++) {
//         if(arr[i] == 0){
//             printf("Yes\n");
//         } else if(arr[i] == 1 || arr[i] == 2) {
//             printf("No\n");
//         }
//     }
//     return 0;
// }



#include<stdio.h>

int main(){
    int a, b;
    while (1){
        scanf("%d %d", &a, &b);
        if (a == 0 || b == 0){
            break;
        }
        if (a <= b){
            printf("No\n");
        } else {
            printf("Yes\n");
        }
    }
    return 0;
}