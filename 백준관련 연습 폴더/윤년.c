#include<stdio.h>

int main() {
    int year, y_year; //y-year = 윤년

    scanf("%d", &year);

    if (year / 4 && year != 100 || year / 400)
    {
        printf("1");
    } else {
        printf("0");
    }

    return 0;
}