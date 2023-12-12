#include<stdio.h>

int main(void){
    /* w개씩 h행에 걸쳐 있을때, 
    w*h = 모든 자릿수
    모든 참가자들은 세로로 n칸, 가로줄 번호의 차가 
    m보다 큰곳애만 앉을수가 있음
    */

    // 목표 : 강의실이 수용할 수 있는 최대 인원수를 출력
    
    int h,w,n,m;
    scanf("%d %d %d %d", &h, &w, &n, &m);
    int a = 0,b = 0;
    int count = 0;
    // 우선 전체 배열을 h*w 만큼 2차원 배열로 만듬
    int arr[h][w] = {0};
    /* (1,1)칸일경우에는 (1,2), (2,1), (2,2) 을
    비우고 배치 해야한다.
    총 앉을수 있는 자리를 구해야 하니까 
    a 와 b에서 1씩 떨어질때 카운트를 높히고
    if()
    */

    for (int i = 0; i < h; i++){
        if(a == 0  && b == 0){
            arr[a][b] = 1;
            a++;
        }else if(arr[a+1][b] == 0 ){
            arr[a+1][b] = 1;
            b+=2;
        }else if(arr[a][b+1] == 0 ){
            arr[a][b+1] = 1;
            a+=2;
            b++;
        }
    }

    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 4; j++){
            printf("%d ", arr[i][j]);
            if(arr[i][j] == 1){
                count += 1;
            }
        }
        printf("\n");
        
    }
    
    printf("%d", count);

    



    return 0;
}