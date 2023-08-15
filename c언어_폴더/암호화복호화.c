    #include <stdio.h>

    int main(void) {
        char test = 'a';
        char key = 0xff;

        char encrypt_word;
        char unencrypt_word;

        encrypt_word = test ^ key;
        unencrypt_word = encrypt_word ^ key;

        printf("암호화된 문자는 %c이며 복호화하면 %c 입니다.", encrypt_word, unencrypt_word);

        return 0;
    }

    // int main(){
    //     printf("hello world!");
    //     return 0;
    // }