#include<stdio.h>

int yongsik(int result[],int b){
    int 요금 = 10;
    int res = 0;
    int 단위 = 30;

    for (int i = 0; i < b; i++){
        for(int j = result[i] / 단위; j > 0; j--){
            res += 요금;
        }
        // if (result[i]<단위){
        //     res += 요금;
        // } else if(result[i]>=단위) {
        //     res += 요금*(result[i]/단위);
        // } else if (result[i]/단위) {
        
        // }
    }
    return res;
}

int minsik(int result[], int c){
    int 요금 = 15;
    int res = 0;
    int 단위 = 60;

    for (int i = 0; i < c; i++){
        for(int j = result[i] / 단위; j > 0; j--){
            res += 요금;
        }
        // if (result[i]<단위){
        //     res += 요금;
        // } else if(result[i]>=단위) {
        //     res += 요금*(result[i]/단위);
        // }
    }
    return res;
}



int print(int res1, int res2){
    if (res1>res2) {
        printf("Y ");
        printf("%d\n", res2); // 영식
    } else if (res2>res1) {
        printf("M ");
        printf("%d\n", res1); // 민식
    } else if (res1 == res2) {
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

    for (int i = 0; i<a; i++) {
        scanf("%d", &arr[i]);
    }

    

    res1 = minsik(arr, a);
    res2 = yongsik(arr, a);

    print(res1, res2);
}