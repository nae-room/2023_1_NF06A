/*
Write a program that converts a binary number to a decimal number. Then, write
another program that performs the reverse operation.
*/

// Binary to Demical

#include <stdio.h>

int main() {
    long long binary, decimal = 0;
    int base = 1, rem;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }

    printf("Decimal equivalent is: %lld\n", decimal);

    return 0;
}
