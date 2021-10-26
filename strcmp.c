#include <stdio.h>

int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
int main()
{
    char str1[20], str2[20];

    printf("문자열1 : ");
    scanf("%s", str1);
    printf("문자열2 : ");
    scanf("%s", str2);

    if (!strcmp(str1, str2))
    {
        puts("두 문자열은 완벽히 동일.");
    }
    else
    {  
        puts("두 문자열은 동일하지 않음.");

        if (!strncmp(str1, str2, 3))
            puts("그러나 앞 세글자는 동일.");
    }
    return 0;
}