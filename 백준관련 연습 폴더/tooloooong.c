#include<stdio.h>
// 가독성 최악 한줄코딩
int main() {int a,b;scanf("%d", &a);if (a>=4 || a<=1000){b = a/4;for (int i = 0; i < b; i++){printf("long ");}printf("int");} else {return 1;}return 0;}