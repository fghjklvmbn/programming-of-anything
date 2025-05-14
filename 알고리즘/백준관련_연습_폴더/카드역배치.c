#include<stdio.h>

int main(){
    int a[21] = {};
    int b[21] = {};   
    for (int i = 1; i <= 20; i++){
        a[i] = i;
    }
    int tmp =0;
    int x,y;
    for (int i = 0; i < 10; i++){
        scanf("%d %d", &x, &y);
            int num = (y-x)/2;
            for (int i = 0; i <= num; i++){
                // 3줄이 swap()
                tmp = a[x]; 
                a[x] = a[y];
                a[y] = tmp;
                // 다음값 교환을 위해 x와 y값을 각각 더하거나 뺴줌
                y--, x++;
            } 
       }
    for (int i = 1; i < 21; i++){
        printf("%d ", a[i]);
    }
    return 0;
}