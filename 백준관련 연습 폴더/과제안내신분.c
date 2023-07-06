#include<stdio.h>

int main(){
    int s[30];
    int s1[30];
    int tmp = 1;
    int tmp1 = 0;
    for (int i = 0; i < 30; i++){
        s[i] = tmp;
        tmp++;
    }

    for (int i = 0; i < 30; i++){
        scanf("%d", &s1[i]);
        if(i>1){
            if(s1[i-1]<s1[i]){
            	tmp1 = s1[i];
	            s1[i] = s1[i-1];
	            s1[i-1] = tmp1;
            } else {
	            tmp1 = s1[i-1];
	            s1[i-1] = s1[i];
	            s1[i] = tmp1;
            }
        }    
    }

    for (int i = 0; i < 30; i++)
    {
        printf("%d ", s1[i]);
    }
    
    return 0;
}