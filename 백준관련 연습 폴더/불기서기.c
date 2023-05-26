#include <stdio.h>

int main() {
    int y;

    scanf("%d", &y);

    if (y <= 1000 || y>=3000){
        return 1;
    } else {
        y = y-543;
        printf("%d", y);
    }
    return 0;

}