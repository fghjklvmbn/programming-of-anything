#include <stdio.h>

int main(){
    int n,m;
    int a,b;
    scanf("%d %d", &n, &m);
    int sum[n];
    int tmp = 1;
    int tmp1 = 0;
    for (int i = 0; i < n; i++){
        sum[i] = tmp;
        tmp++;
    }
    for (int i = 0; i < m; i++){
        scanf("%d %d", &a, &b);
        tmp1 = sum[a-1];
        sum[a-1] = sum[b-1];
        sum[b-1] = tmp1;
    }
    for (int i = 0; i < n; i++){
        printf("%d ", sum[i]);
    }
    return 0;
}