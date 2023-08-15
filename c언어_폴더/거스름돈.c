
#include <stdio.h>

int main(void) {
    int pay,ins, cash;
    int c5k,c1k,c500,c100,c50,c10;
    int another;

    printf("물건값을 입력하시오 : ");
    scanf("%d원", &pay);
    printf("받은돈을 입력하시오 : ");
    scanf("%d원", &ins);

    cash = ins - pay;

    c5k = cash / 5000;
	another = cash % 5000;
    c1k = another / 1000;
	another = another % 1000;
    c500 = another / 500;
	another = another % 500;
	c100 = another / 100;
	another = another % 100;
    c50 = another / 50;
	another = another % 50;
    c10 = another / 10;
	another = another % 10;

    printf("\n5천원 : %d", c5k);
    printf("\n1천원 : %d", c1k);
    printf("\n500원 : %d", c500);
    printf("\n100원 : %d", c100);
    printf("\n50원 : %d", c50);
    printf("\n10원 : %d", c10);
    

    return 0;
}