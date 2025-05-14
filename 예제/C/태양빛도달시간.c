#include <stdio.h>

int main(void) {
    int lighting = 300000;  
    int distance = 149600000;
    int sum = 0;

    sum = distance / lighting;

    printf("태양부터 지구까지 거리는 약 %dkm이며, 빛의 도달 시간은 약 %d초 입니다.", distance, sum );

    return 0; 
}