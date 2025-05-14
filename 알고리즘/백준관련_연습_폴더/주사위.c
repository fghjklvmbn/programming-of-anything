#include<stdio.h>

int main() {
    int a,b,c, b_tmp, tmp;
    int sum = 0;
    tmp = 0 ;
    b_tmp = 0;

    scanf("%d %d %d", &a, &b, &c);
    
    if (a>6 || b>6 || c>6){
        return 1;
    }
    if (a<=0 || b<=0 || c<=0){
        return 1;
    }

    if (a==b && b==c && a==c){tmp = a = b = c; sum = 10000+(tmp*1000);} // 작동
    else if(a!=b && b!=c && a==c){
        if(a==c){
            tmp = a = c;
            }
        sum = 1000+(tmp*100);}// 작동
    else if(a!=b && a!=c && b==c){
        if(b==c){
            tmp = b = c;
            }
        sum = 1000+(tmp*100);
    }// 작동
    else if(b!=c && a!=c && a==b){
        if(a==b){
            tmp = a = b;
            }
        sum = 1000+(tmp*100);
        }
    else if(a!=b && b!=c && a!=c){
        if (a>b && b>c && a>c){
            b_tmp = a;
            } else if(a>b && b<c && a>c){
            b_tmp = a;
        } // a 작동
        if (a<b && b>c && a<c){
            b_tmp = b;
            } else if(a<b && b>c && a>c){
            b_tmp = b;
        } // b 작동
        if (a<b && b<c && a<c){
            b_tmp = c;
            } else if(a>b && b<c && a<c){
            b_tmp = c;
        } // c
        sum = (b_tmp *100);
        } 
    printf("%d\n", sum);
    return 0;
}