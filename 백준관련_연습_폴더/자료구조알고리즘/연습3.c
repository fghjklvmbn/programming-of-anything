#include<stdio.h>
#include<math.h>



int main(){
    int N;
    scanf("%d", &N);
    // 1,2,3,4,5,6,7,8,9
    /*
    n이 제곱수이면 1
    아니면 0 반환

    sqrt? - double형이 되므로 안됨
    */
   if(N/sqrt(N) == 0){
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}