#include <stdio.h>

int main(){
    // 입력부분
    int a,b;
    int tmp = 0;
    int arr[tmp];
    
    while (scanf("%d %d", &a, &b)) {
        if (a<b) {
            arr[tmp] = 1;
        } else if (a>b) {
            arr[tmp] = 0;
        } else if (a>0 && b>0 && a==b){
            arr[tmp] = 0;
        } else if(a==0 && b==0){
            break;
        }
        tmp++;
    }

    for (int i=0; i<tmp; i++) {
        if(arr[i] == 0){
            printf("No\n");
        } else if(arr[i] == 1) {
            printf("Yes\n");
        }
    }

    return 0;
}