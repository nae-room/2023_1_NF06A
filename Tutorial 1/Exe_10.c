/*
Write a program that converts an decimal integer to an octal number.
*/

#include <stdio.h>

int main() {
    int decimal, octal = 0, base = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        octal += (decimal % 8) * base;
        decimal /= 8;
        base *= 10;
    }

    printf("Octal equivalent is: %d\n", octal);

    return 0;
}
