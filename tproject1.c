// 찬사 조사 프로젝트?
// 천사 정보 : 이름 나이 몸무게 키 범죄명
#include <stdio.h>
#include <stdlib.h>

int main(void){
    char name[20];
    char angel[50];
    char age[50], weight[50], height[50];

    system("clear");
    printf("천사의 이름 : ");
    scanf("%s", name);
    printf("천사의 나이 : ");
    scanf("%s", age);
    printf("천사의 몸무게 : ");
    scanf("%s", weight);
    printf("천사의 키 : ");
    scanf("%s", height);
    printf("천사 직책 : ");
    scanf("%s", angel);
    printf("--------------------\n");
    printf("*천사 정보*\n");
    printf("이름 : %s\n 나이 : %s \n 몸무게 : %s \n 키 : %s \n 직책 : %s\n",name, age, weight, height, angel);
    printf("--------------------\n");

}