/*
Write a program in C that converts a demical integer to an hexadecimal number.
*/

#include <stdio.h>

int main() {
    int decimal, remainder, i = 0;
    char hex[20];

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    while (decimal > 0) {
        remainder = decimal % 16;

        if (remainder < 10) {
            hex[i] = remainder + '0';
        } else {
            hex[i] = remainder + 55; // ASCII code for 'A' is 65
        }

        decimal /= 16;
        i++;
    }

    printf("Hexadecimal equivalent is: ");

    for (int j = i - 1; j >= 0; j--) {
        printf("%c", hex[j]);
    }

    printf("\n");

    return 0;
}
