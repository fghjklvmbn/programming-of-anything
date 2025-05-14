#include<stdio.h>

int minsik(int result[], int b){
    int res = 0;
    int 요금 = 15;
    int n = 60;
    for (int i = 0; i < b; i++){
        int a = 0;
        a = result[i] / 60;
        if(a==0){
            res += 요금;
        }
        for (int j = a; j >= 0; j--){
            if((a*n) <= result[i] < ((a*(2*n)))){
                res += 요금;
            }
        }
    }
    return res;
}

int yongsik(int result[], int c){
    int res = 0;
    int 요금 = 10;
    int n = 30;
    for (int i = 0; i < c; i++){
        int a = 0;
        a = result[i] / 30;
        if(a==0){
            res += 요금;
        }
        for (int j = a; j >= 0; j--){
            if((a*n) <= result[i] < ((a*(2*n)))){
                res += 요금;
            }
        }
    }
    return res;
}



int print(int res1, int res2){
    if (res1>res2) { // 요금이 영식쪽이 더 작으면
        printf("Y ");
        printf("%d\n", res2); // 영식
    } else if (res2>res1) { // 요금이 민식쪽이 더 작으면
        printf("M ");
        printf("%d\n", res1); // 민식
    } else if (res1 == res2) { // 둘다 요금이 같다면
        printf("Y M ");
        printf("%d\n", res1); // 둘다 출력
    }  
    return 0;
}

int main(){
    int a;
    int res1;
    int res2;

    scanf("%d", &a);
    int arr[a];
    // 여기가 문제였음 ㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋㅋ
    for (int i = 0; i<a; i++) {
        scanf("%d", &arr[i]);
    }
    res1 = minsik(arr, a);
    res2 = yongsik(arr, a);

    print(res1, res2);

    return 0;
}