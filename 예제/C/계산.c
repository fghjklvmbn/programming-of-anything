#include <stdio.h>

int main() {
    int x=10, y=10, z=33;

    x +=1;
    y *=2;
    z %= 10+20;

    printf("x의 값 : %d", x);
    printf("\ny의 값 : %d", y);
    printf("\nz의 값 : %d", z);
    return 0; 
}