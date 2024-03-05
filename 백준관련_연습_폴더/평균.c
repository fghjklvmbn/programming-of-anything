#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    double sum = 0;
    int result[n+1];
    for (int i = 0; i < n; i++){
        scanf("%d", &result[i]);
        sum += result[i];
    }

    printf("%0.1f", sum/n);

    return 0;
}