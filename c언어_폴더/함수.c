#include<stdio.h>

// 반환형 
void print_stars(){
    for (int i = 0; i < 30; i++){
        printf("*");
    }
}

int main(){
    print_stars();
    printf("\nhello world\n");
    print_stars();

    return 0;
}