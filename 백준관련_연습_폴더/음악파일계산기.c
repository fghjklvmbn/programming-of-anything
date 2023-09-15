#include<stdio.h>

int main(){
    long h, b, c, s;
    double sum = 0;
    scanf("%ld %ld %ld %ld", &h, &b, &c, &s);
    double tmp = (h*b*c*s)/8;
    sum = (tmp/1024)/1000;
    if (sum >= 1024){
        sum = sum / 1024;
        printf("%.2f GB", sum);
    } else {printf("%.1f MB", sum);}
    return 0;
}