#include <stdio.h>

int main(){
    int a,b;

    scanf("%d", &a);
    scanf("%d", &b);

    printf("%d\n", b-(a+1));
    for (int i = a+1; i<b; i++) {
        printf("%d ", i);
    }
    return 0;
}