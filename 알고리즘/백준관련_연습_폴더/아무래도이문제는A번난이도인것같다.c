// 정수 A(a+a..)는 A(a*a..)를 변할수 있다 가 가정해서 맞으면 yes, 아니면 no 출력


// 1 테스트케이스
// 2 숫자 두개(long형태)

// 6 5 이면
// 2+3 = 5
// 2*3 = 6 이므로 테스트케이스에 맞으니 yes 출력
// 곱셈은 소인수분해하면 되는데
// 덧셈은 음.. 경우별로 대입해서 할수밖에
// 5 = 4+1, 3+2, 2+3, 1+4
// 이렇게 대입해보고 이것을 곱한 결과가 맞으면 yes 출력


#include <stdio.h>


int result(int mul, int sum){
    for (int j = 2; j < b[i]-1; j++) {
        if (d%i == 0) {
            mul *= j; 
            sum += j;
            j--;
            d /= j;
        }
    }
}


int main(){
    int a;
    scanf("%d", &a);
    int b[a],c[a];
    int mul = 1, sum = 0;
    int d;
    for (int i = 0; a>i; i++) {
        scanf("%d %d", &b[i], &c[i]);
    }

    for (int i = 0; i < a; i++){
        d = b[i];
        result(mul, sum);
        if(mul == sum){
            printf("Yes");
        } else {
            printf("No");
        }
    }
    return 0;
}

/*
int a, b;
int mul = 1, sum = 0 ;
c = a;

for (int i = 2; i<a-1; i++) {
    if (c%i == 0) {
        mul *= i, sum += i;
        i--;
        c /= i;
    }
}
printf mul, sum

mul == sum

if(mul == sum){
            printf("Yes");
        } else {
            printf("No");
        }
*/