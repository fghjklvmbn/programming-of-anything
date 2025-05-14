#include<stdio.h>

int main() {
    int year, y_year; //y-year = 윤년

    scanf("%d", &year);

    y_year = (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);

    printf("%d", y_year);
    return 0;
}