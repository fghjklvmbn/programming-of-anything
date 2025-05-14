#include<stdio.h>

int fahrenhelt(int n){
    int result;
    result = (n-32)*(5/9);
    return result;
}

int celsius(int n){
    int result;
    result = (n * 9/5) + 32;
    return result;
}

int main(void){

    int n;
    char a;
    printf("매뉴에서 선택하세요. ");
    scanf("%c", &a);

    switch (a){
    case 'c':
        printf("섭씨온도 : ");
        scanf("%d", &n);
        printf("화씨온도 : %d\n", celsius(n));
        break;
    case 'f':
        printf("화씨온도 : ");
        scanf("%d", &n);
        printf("섭씨온도 : %d\n", fahrenhelt(n));
        break;
    case 'q':
        break;
    }
}