#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


// 기초값 정하기
int num = 6;
int INF = 10000000;


// 값을 정하기(초기화)
int a[6][6] = {
    {0, 2, 5, 1, 100000, 100000}, 
    {2, 0, 3, 2, 100000, 100000}, 
    {5, 3, 0, 3, 1, 5}, 
    {1, 2, 3, 0, 1, 100000}, 
    {100000, 100000, 1, 1, 0, 2}, 
    {100000, 100000, 5, 100000, 2, 0},
};
bool v[6]; // 방문 노드
int d[6]; // 거리 노드


// 값 바꾸기를 이용해 작은값 찾기
int getSmallIndex(){
    int min = INF;
    int index = 0;
    for (int i = 0; i < num; i++){
        if(d[i] < min && !v[i]){
            min = d[i];
            index = i;
        }
    }
    return index;
}

void dijkstra(int start){
    for (int i = 0; i < num; i++){
        d[i] = a[start][i];
    }
    v[start] = true;
    for(int j = 0; j<6; j++){
        int current = getSmallIndex();
        v[current] = true;
        if(!v[j]){
            if(d[current] + a[current][j] < d[j]){
                d[j] = d[current] + a[current][j];
            }
        }
    }
}

int main(void){
    dijkstra(0);
    for (int i = 0; i < num; i++){
        printf("%d", d[i]);
    }
    
}











