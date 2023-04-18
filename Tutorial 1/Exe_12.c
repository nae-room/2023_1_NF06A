/*
Write a program in C that prints the minimum and maximal limits of the following types: int, short, char et long.
N.B. use the binary operations >>, ∼ and conversion.
*/

#include <stdio.h>
#include <limits.h>

int main() {
    printf("Minimum and maximum limits of various types:\n\n");

    // int
    printf("int:\n");
    printf("Minimum: %d\n", ~(int)((unsigned int)~0 >> 1));
    printf("Maximum: %d\n", (int)((unsigned int)~0 >> 1));
    printf("\n");

    // short
    printf("short:\n");
    printf("Minimum: %d\n", ~(short)((unsigned short)~0 >> 1));
    printf("Maximum: %d\n", (short)((unsigned short)~0 >> 1));
    printf("\n");

    // char
    printf("char:\n");
    printf("Minimum: %d\n", ~(char)((unsigned char)~0 >> 1));
    printf("Maximum: %d\n", (char)((unsigned char)~0 >> 1));
    printf("\n");

    // long
    printf("long:\n");
    printf("Minimum: %ld\n", ~(long)((unsigned long)~0 >> 1));
    printf("Maximum: %ld\n", (long)((unsigned long)~0 >> 1));
    printf("\n");

    return 0;
}
