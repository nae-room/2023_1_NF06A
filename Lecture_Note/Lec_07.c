#include <stdio.h>

int i;
void main()
{
    i=23;
    printf(" i(dec) = %d\n", i);    // 10진수
    printf(" i(octal) = %o\n", i);  // 8진수
    printf(" i(hex) = %x\n", i);    // 16진수
    scanf("%d", &i);
    printf("New value of i = %d\n", i);
}