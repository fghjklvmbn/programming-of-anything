#include<stdio.h>
#include<math.h>

int main() {
    int a, b;
    int sum = 0;

    for (int i = 0; i !=EOF ; i++)
    {
        scanf("%d %d", &a,&b);
        sum = a+b;
        printf("%d\n",sum);
        if(a==0||b==0){
            return 0;
        }
    }
    return 0;
}