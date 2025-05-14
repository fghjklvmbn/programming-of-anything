#include<stdio.h>

int a_sum(int d){
    int sum = 0;
    sum = (d/2);
    return sum;
}

int b_sum(int d){
    int sum = 0;
    sum = (d/2);
    return sum;
}

int main(){
    int d = 0;
    int i =1;
    while (1){
        scanf("%d", &d);
        if (d == 0){
            break;
        }
        if (d % 2 == 0){
            printf("%d. even %d\n",i ,a_sum(d));
            i++;
            continue;
        } else{
            printf("%d. odd %d\n",i ,b_sum(d));
            i++;
            continue;
        }
    }
    return 0;
}