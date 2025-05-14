#include <stdio.h>

int main(){
    long long a,b;

    scanf("%lld", &a);
    scanf("%lld", &b);
    
    if (a>b){
        printf("%lld\n", a-b-1);
        for (long long i = b+1; i<a; i++) {
            printf("%lld ", i);
        }
    } else if (a<b){
        printf("%lld\n", b-a-1);
        for (long long i = a+1; i<b; i++) {
            printf("%lld ", i);
        }
    } else {
        printf("0");
    }
    return 0;
}