/*
Write a program that takes as input an integer x, a number p and prints x with p
reversed bits starting from the position n. The bits are numbered from the right to left
and start from 1.
Example: if x = 16 (10000 in binary), n = 2 and p = 3, the returned number is 30
(11110 in binary).
*/

#include <stdio.h>

unsigned int reverseBits(unsigned int num, unsigned int n, unsigned int p) {
    unsigned int mask = ((1 << p) - 1) << (n - p);
    return ((num & ~mask) | (~num & mask));
}

int main() {
    unsigned int x, p, n, reversed_x;

    printf("Enter an integer: ");
    scanf("%u", &x);

    printf("Enter the starting position of the bits to be reversed: ");
    scanf("%u", &n);

    printf("Enter the number of bits to be reversed: ");
    scanf("%u", &p);

    reversed_x = reverseBits(x, n, p);

    printf("The result is %u", reversed_x);

    return 0;
}
