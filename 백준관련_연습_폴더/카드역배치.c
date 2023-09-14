#include<stdio.h>
#include<stdlib.h>

int *sum(int a[],int tmp, int x, int y){
    for(int i = x; i<=y; i++){ // x부터 y까지 계속
        for (int j = y-x; j >= 0; j--){
		    tmp = a[j];
		    a[j] = a[j+1];
		    a[j+1] = tmp;
	    }
    }
}

int main(){
    int a[21] ={0};
    for (int i = 1; i <= 20; i++){
        a[i] = i;
    }
    
    int x,y;
    scanf("%d %d", &x, &y);

    for (int i = 1; i <= 20; i++){
        printf("%d ", sum(a, 0, x,y));
    }

    return 0;
}