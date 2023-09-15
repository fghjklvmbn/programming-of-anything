#include<stdio.h>

int main(void) {
    int score;

    scanf("%d", &score);

    if (score <= 100 && score >=90)
    {
        printf("A");
    } else if (score <= 89 && score >= 80)
    {
        printf("B");
    } else if (score <= 79 && score >= 70)
    {
        printf("C");
    } else if (score <= 69 && score >= 60)
    {
        printf("D");
    } else if (score <= 59)
    {
        printf("F");
    }

    return 0;
}

// #include<stdio.h>

// int main(void) {
//     int score;
//     scanf("%d", &score);
//     if(100>=score && score>=90){
//         printf("A");
//     }else if(89>=score && score>=70){
//         printf("B");
//     }else if(69>=score && score>=40){
//         printf("C");
//     }else if(39>=score){
//         printf("D");
//     }
//     return 0;
// }