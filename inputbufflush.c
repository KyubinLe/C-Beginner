#include <stdio.h>

int main()
{
    char perID[7];
    char name[10];

    fputs("주민번호 앞 6자리 입력: ", stdout);
    fgets(perID, sizeof(perID), stdin);
    while (getchar() != '\n');
    fputs("이룸 : ", stdout);
    fgets(name, sizeof(name), stdin);
    printf("주민번호 : %s \n", perID);
    printf("이룸: %s \n", name);
    return 0;
}