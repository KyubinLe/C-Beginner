#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int num = 0;

    printf("1~5 number insert : ");
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("1 is ONE\n");
        break;
    case 2:
        printf("2 is TWO\n");
        break;
    case 3:
        printf("3 is THTEE\n");
        break;
    case 4:
        printf("4 is FOUR\n");
        break;
    case 5:
        printf("5 is FIVE\n");
        break;
    default:
        printf("error\n");
        break;
    }
    return 0;
}