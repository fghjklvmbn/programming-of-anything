#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    int num1 = *(int*)a;
    int num2 = *(int*)b;

    if(num1<num2)
        return -1;

    if(num1>num2)
        return 1;

    return 0;
}


int main(){
    int a[7];
    int b[7]= {0};
    int result = 0;
    int 짝수 = 0;
    int tmp = 0;
    for(int i=0; i<7; i++){
        scanf("%d", &a[i]);
        if((a[i] % 2) != 0){
	        // 홀수
	        result += a[i];
            b[tmp] = a[i];
            tmp++;
	    } else {
		    // 짝수
            짝수 += a[i];
		    continue;
        }
    }
    qsort(b, sizeof(b) / sizeof(int), sizeof(int), compare);

    if (result == 0){
        printf("-1\n");
        return 0;
    } else {
        printf("%d\n", result);
        for (int i = 0; i < 7; i++){
            if (b[i] == 0){
                continue;
            } else{
                printf("%d\n", b[i]);
                break;
            }
        }
    }
    
    return 0;
}