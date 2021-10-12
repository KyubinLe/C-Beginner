#include <stdio.h>
#include <stdlib.h>

int main(){
    system("clear");
    int dan = 0, num=1;
    printf("몇단 ? : ");
    scanf("%d", &dan);

    while (num<10)
    {
        printf("%d x %d = %d \n", dan, num, dan*num);
        num++;
    }
    return 0;
}