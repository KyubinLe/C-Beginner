#include <stdlib.h>
#include <stdio.h>

void recursive(int num)
{
    if (num <= 0)
        return;
    printf("Recursive call! %d \n", num);
    recursive(num - 1);
}

int main(void)
{
    system("clear");
    recursive(3);
    return 0;
}