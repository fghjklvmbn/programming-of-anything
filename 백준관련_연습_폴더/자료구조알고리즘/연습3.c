#include<stdio.h>

int func1(int arr[], int N){
    // O(n^2)
    for (int i = 0; i < N; i++){ // arr[0]
        for (int j = i+1; j < N; i++){ // arr[0+1] -> arr[1]
            if(arr[i] * arr[j] == 100){ // arr[0]* arr[1] == 100 이면
                return 1;// 1 리턴
            }
        }
    }
    return 0; // 아니면 0 리턴
}

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("%d", func1(&arr[n], n));

    return 0;

}