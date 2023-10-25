
#include<stdio.h>

typedef enum{false, true} boolean;
extern boolean lock = false;
extern int balence;

// 잠금(기본코드)
main(){
    while (lock == true);
    lock = true;
    // 임계구역 시작
    balence += 10;
    // 임계구역 끝
    lock = false;
}