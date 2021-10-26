#include <stdio.h>

int absocompare();
int getabsovalue();

int main()
{
    int num1, num2;
    printf("두개의 정수 입력: ");
    scanf("%d %d", &num1, &num2);
    printf("%d와 %d중 절댓값이 큰 정수 : %d\n", num1, num2, absocompare(num1, num2));
    return 0;
}

int absocompare(int num1, int num2)
{
    if (getabsovalue(num1) > getabsovalue(num2))
        return num1;
    else
        return num2;
}

int getabsovalue(int num)
{
    if (num < 0)
        return num * (-1);
    else
        return num;
}
/*
int numbercompare();

int main()
{
    printf("3과 4중에서 큰수는 %d이다.\n", numbercompare(3, 4));
    printf("7과 2중에서 큰수는 %d이다.\n", numbercompare(7, 2));
}

int numbercompare(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}*/