#include <stdio.h>

int main(){
    char c = 'r';
    unsigned char uc = 's';
    short s = 10;
    unsigned short us = 90;
    int i = 999;
    unsigned u = 11;
    long l = 12;
    unsigned long ul = 45;

    printf("char: %c: %lu \n", c , sizeof(c));
    printf("char: %c: %lu \n", uc , sizeof(uc));
    printf("char: %d: %lu \n", s , sizeof(s));
    printf("char: %d: %lu \n", us , sizeof(us));
    printf("char: %d: %lu \n", i , sizeof(i));
    printf("char: %d: %lu \n", u , sizeof(u));
    printf("char: %ld: %lu \n", l , sizeof(l));
    printf("char: %ld: %lu \n", ul , sizeof(ul));


    return 0;
}
