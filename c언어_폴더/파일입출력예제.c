#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define file_name "park.txt"

// struct을 이용하여 변수 초기화 및 정의(main의 단축어 people_info)
typedef struct people_data{
    char name[21];
    int age;
} people_info;

// 사람찾기 기능 구현 위한 find_people_name 함수 설정(struct된 데이터를 포인터로 쓸 수 있게 함)
void find_people_name(people_info* people, int size);

// 메인코드(파일 입출력)
int main(void){
    // 구조체 데이터 가져오기
    people_info people[100];
    // 읽기모드로("r") file_name 이름 으로 define 되어있는 파일 불러오기
    FILE* fp = fopen(file_name, "r");
    // 파일이 없을때
    if(fp == NULL){
        printf("파일을 불러오지 못했습니다.");
        return 1;
    }
    // 버퍼, 토큰 정의(strtok 사용을 위한 빌드업)
    char buffer[1001], *token;

    int i = 0;
    int idx =0;
    while (!feof(fp)){
        i = 0;
        fgets(buffer, 1001, fp);
        // strtok = string token, 
        token = strtok(buffer," ");
        while (token != NULL){
            if(i==0){
                strcpy(people[idx].name, token); // strcpy : string를 카피하는 함수, strcpy(복사할 배열, 붙혀넣기할 배열)
            } else if(i==1){
                people[idx].age = atoi(token);
            }
            i++;
            token = strtok(NULL, " "); // 파일의 token이 " "(공백)이나 NULL으로 끝나면 반복문 종료
        }
        idx++;
    }
    
    for (int i = 0; i < idx; i++){
        printf("%s %d\n", people[i].name, people[i].age);
    }
    fclose(fp); // FLIE(stdio.h포함)의 포인터인 fp로 fopen으로 park.txt 불러왔던 것을 닫는 코드 

    find_people_name(people, idx); // fclose후 people_info 구조체에 있던 데이터를 포인터되어있는 people으로 간접적으로 가져오기
    return 0;
}

// 파일에서 포인터를 이용해서 저장한 사람(people_info 참조)찾는 코드
void find_people_name(people_info* people, int size){
    printf("찾고싶은 사람을 입력하시오: ");
    char find_name[100];
    scanf("%s", find_name);
    char *ptr;
    people_info* p;
    int line = 0;
    for (p = people; p < people + size; p++,line++){
        ptr = strstr(p->name, find_name);
        if(ptr!=NULL){
            printf("파일의 [%d]line에 이름 : [%s], 나이 : [%d] 발견\n", line, p->name, p->age);
        }
    }
    

}