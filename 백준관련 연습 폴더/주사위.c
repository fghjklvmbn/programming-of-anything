#include<stdio.h>

int main() {
    int a,b,c, b_tmp, tmp;
    int sum = 0;
    tmp = 0 ;
    b_tmp = 0;

    scanf("%d %d %d", &a, &b, &c);
    // 부호 판별 코드(큰수 판별)
    
    if (a==b && b==c && a==c){tmp = a = b = c; sum = 10000+(tmp*1000);} // 작동
    else if(a!=b && b!=c && a==c){if(a==c){tmp = a = c;}sum = 1000+(tmp*100);}// 작동
    else if(a!=b && a!=c && b==c){if(b==c){tmp = b = c;}sum = 1000+(tmp*100);}// 작동
    else if(b!=c && a!=c && a==b){if(a==b){tmp = a = b;}sum = 1000+(tmp*100);}// 작동
    else if(a!=b && b!=c && a!=c){if(a<b<c){b_tmp = c;}if(a<b>c){b_tmp = b;}if(a>b>c){b_tmp = a;}sum = (b_tmp *100);} // 작동불가
    
    printf("%d", sum);
    
    return 0;
}