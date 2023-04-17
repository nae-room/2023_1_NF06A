/*
Write a program that prints the size of the following types : int, short, char, flaot and double.
*/

#include <stdio.h>

int main()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    // sizeof evaluates the size of a variable
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of short: %d byte\n", sizeof(short));
    printf("Size of char: %d byte\n", sizeof(char));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));

    return 0;
}