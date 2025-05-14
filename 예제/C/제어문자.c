#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int id, pass;

    printf("아이디와 패스워드를 입력해주세요\n");
    printf("id : ____\b\b\b\b");
    scanf("%d", &id);
    printf("\npassword : ____\b\b\b\b");
    scanf("%d", &pass);

    printf("입력하신 아이디는 \"%d\" 이며, 비밀번호는 \"%d\" 입니다.", id, pass);
    return 0;
}