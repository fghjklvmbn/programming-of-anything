// 생각해낸 알고리즘(실 구현)

// 입력 
// 첫째 입력에 채널 갯수가 주어지고
// 두번째부터 채널이 들어감(단 kbs1,2는 무조건 들어감)

// 출력

// 1. 화살표를 한 칸 아래로 내린다. (채널 i에서 i+1로)
// 2. 화살표를 위로 한 칸 올린다. (채널 i에서 i-1로)
// 3. 현재 선택한 채널을 한 칸 아래로 내린다. (채널 i와 i+1의 위치를 바꾼다. 화살표는 i+1을 가리키고 있는다)
// 4. 현재 선택한 채널을 위로 한 칸 올린다. (채널 i와 i-1의 위치를 바꾼다. 화살표는 i-1을 가리키고 있다)

// 이 방법을 사용해서 컨트롤

// 예를들어 아래일 경우는

// 3
// MBC <- 선택
// KBS1
// KBS2

// MBC를 밑으로 2번내리는게 답이니 "33" 이라 출력하면 됨

// 결과 : 

// KBS1
// KBS2
// MBC <- 선택





// 4
// ABC1
// ABC02
// KBS2
// KBS1

// 위의 방법은 보면 ABC1, ABC02가 내려가거나 1,2번을 쓰는 방안 두개가 있다.


// 1. 답안 방법
// 이거 500자 넘으면 안됨 = 최적의 방안 필요
// 11144411144 방안

// 111
// ->
// ABC1 
// ABC02
// KBS2 
// KBS1 <-- 선택

// 444
// -->
// KBS1 <-- 선택
// ABC1 
// ABC02
// KBS2 

// 111
// -> 
// KBS1 
// ABC1 
// ABC02
// KBS2 <-- 선택


// 44
// -> 
// KBS1 
// KBS2 <-- 선택
// ABC1 
// ABC02 


// 2)
// 33144413 방법

// 331
// ->
// ABC02
// KBS2
// ABC1 
// KBS1 <- 선택

// 444
// ->
// KBS1 <- 선택
// ABC02
// KBS2
// ABC1 

// 13
// ->
// KBS1 
// KBS2
// ABC02 <- 선택
// ABC1 


// 3. 코드 변환
// 각 입력할때 줄마다 설정이 필요

// 첫번째 줄 channel_count 생성 후 저장
// a[channel_count]
// 두번째 줄부터 배열에 저장
// for(int i =0; i<channel_count; i++){
// 	scanf("%d", &a[i]);
// }

// 이렇게 배정하고
// 각 방법들은 함수를 따로 만들어서 조작을 하면 된다.
// (up, down, upper, downner)

// 함수(모듈)
// if함수로 "kbs1"을 찾아다니면서 (down하면서)있으면 끌어올리기

// 아 ㅋㅋㅋ 그리디였네

// /home/MAIN/code1/programming-of-anything/"백준관련_연습_폴더"





// #include <stdio.h>

// // int up(){
    
// // }
// // int down(){
    
// // }
// char* upper(char a[], int n, int leng[], int leng_tmp){
//     int tmp;
//     a[n] = tmp;
//     a[n] = a[n+1];
//     a[n+1] = tmp;
//     leng[leng_tmp] = 4;
//     leng_tmp++;
//     return a;
// }

// char* downner(char a[], int n, int leng[], int leng_tmp){
//     int tmp;
//     a[n] = tmp;
//     a[n] = a[n-1];
//     a[n-1] = tmp;
//     leng[leng_tmp] = 3;
//     leng_tmp++;
//     return a;
// }

// int main(){
//     int channel_count;
//     scanf("%d", &channel_count);
//     char a[channel_count];
//     int select = 0;
//     int leng[501];
//     int leng_tmp = 0;
//     char 기준점[2][5] = {"KBS1", "KBS2"};
//     // 입력단
//     for (int i = 0; i<channel_count; i++) {
//         scanf("%s", &a[i]);
//     }

//     // 처리단
//     for (int i = 0; i<channel_count; i++) {
//         for (int j = 0; &a[j] == 기준점[0]; j++, leng_tmp++) {
//             leng[leng_tmp] = 1;
//             select = j;
//         }
//         for (int j = select; &a[0] == 기준점[0]; j--) {
//                 upper(a, j, leng, leng_tmp);
//         }
//         select = 0;
//         for (int j = 0; &a[j] == 기준점[1] ; j++, leng_tmp++) {
//             leng[leng_tmp] = 1;
//             select = j;
//         }
//         for (int j = select; &a[1] == 기준점[1]; j--) {
//                 upper(a, j, leng, leng_tmp);
//         }
//     }
//     // 출력단
//     for (int i = 0; i<leng_tmp; i++) {
//         printf("%d", leng[i]);
//     }
//     return 0;
// }

// 1과 4로만 쓰는 알고리즘
#include <stdio.h>
#include <string.h>

int main(){
    int a;
    scanf("%d", &a);
    int index[2];
    char b[11];
    for (int i =0; i<a; ++i) {
        scanf("%s", b);
        if (strcmp(b, "KBS1") == 0) {
            index[0] = i;
        } 
        if(strcmp(b, "KBS2") == 0){
            index[1] = i;
        }
    }
    int add = index[0]>index[1];
    for (int i = 0; i<index[0]; ++i) {
        printf("1");
    }
    for (int i = 0; i<index[0]; ++i) {
        printf("4");
    }
    for (int i = 0; i<index[1] + add; ++i) {
        printf("1");
    }
    for (int i = 0; i<index[1] + add - 1; ++i) {
        printf("4");
    }
    return 0;
}