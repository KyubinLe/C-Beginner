#include <stdio.h>
void prin(int num){
    if (num <= 3)
    {
    printf("%d입니다.\n", num);
    }
    else printf("범위를 벗어났습니다.\n");
}

int main()
{
    int num = 0;
    void (*fptr)(int);
    printf("0~3 선택 : ");
    scanf("%d", &num);
    fptr = prin;
    fptr(num);

}