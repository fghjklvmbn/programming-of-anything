#include<stdio.h>

int main() {
    int a, b, T;
    int sum = 0;
    scanf("%d", &T);
    for (int i = 0; i != EOF; i++){
        scanf("%d %d", &a,&b);
        sum = a+b;
        printf("%d\n",sum);
        if (a == EOF || b == EOF)
        {
            break;
        }
        
    }
    return 0;
}