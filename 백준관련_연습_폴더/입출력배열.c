#include<stdio.h>

int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int array[n];
    for (int i = 1; i <= n; i++){
        scanf("%d", &array[i]);
    }
    int b;
    scanf("%d", &b);
    for (int i = 1; i <= n; i++){
        if (array[i] == b){
            sum += 1;
        }
    }
    printf("%d", sum);
    return 0;
}