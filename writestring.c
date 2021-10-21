#include <stdio.h>

int main(){
    char * str="sinple String";

    printf("1.puts test -- \n");
    puts(str);
    puts("so simple string");

    printf("2. fputs test -- \n");
    fputs(str, stdout);
    fputs("so simple string", stdout);
    printf("\n");
    printf("3. end of main");
    return 0;
}