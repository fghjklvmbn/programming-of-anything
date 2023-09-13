#include<stdio.h>
#include<stdlib.h>

int main(){
    int a[21];
    for (int i = 1; i <= 20; i++){
        scanf("%d", &a[i]);
    }
    int x,y;
    scanf("%d %d", &x, &y);

    int tmp = 0;
    for(int i = x; i<=y; i++){
	    tmp = a[i];
	    a[i] = a[y];
	    a[y] = tmp;
    }

    for (int i = 1; i < 20; i++){
        printf("%d", a[i]);
    }

    return 0;
}