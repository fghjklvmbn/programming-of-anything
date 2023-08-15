#include <stdio.h>

int main() {
    int x,y;
    x = 1;

    printf("수식 x+1의 값은? : %d", x+1);
    printf("\n수식 y=x+1의 값은? : %d", y=x+1);
    printf("\n수식 y=10-(x+1)의 값은? : %d", y=10+(x=7+2));
    printf("\n수식 y=x=3의 값은? : %d", y=x=3);

    return 0;
}