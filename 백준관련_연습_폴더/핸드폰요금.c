#include<stdio.h>

int yongsik(int result[]){
    int 요금 = 10;
    int 구간1 = 20;
    int res = 0;

    for (int i = 0; i < 3; i++){
        if (result[i]<30){
            res += 요금;
        } else if(result[i]>=30) {
            res += 구간1;
        }
    }
    return res;
    
}

int minsik(int result[]){
    int 요금 = 15;
    int 구간1 = 30;
    int res1 = 0;

    for (int i = 0; i < 3; i++){
        if (result[i]<60){
            res1 += 요금;
        } else if(result[i]>=60) {
            res1 += 구간1;
        }
    }
    return res1;
}

int main(){
    int n;
    int a[2];
    scanf("%d", &n);
    int result =0;

    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        result += a[i];
    }

    int res1 = 0;
    int res2 = 0;

    for (int i = 0; i < 3; i++){
        minsik(&a[i]);
        yongsik(&a[i]);
    }
    

    // printf("민식 : %d\n", minsik(&a[2]));
    // printf("영식 : %d\n", yongsik(&a[2]));

    return 0;
    
}