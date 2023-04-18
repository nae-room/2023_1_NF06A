/*
Write a program in C that allow us to perform:
• Binary AND between two integers.
• Binary OR between two integers.
• Binary XOR between two integers.
• Ones’ complement of an integer.
• Prints the leftmost 8 bits of a short integer.
• Prints the rightmost 8 bits of a short integer.
*/

#include <stdio.h>

// Binary AND between two integers
int bitwise_and(int a, int b) {
    return a & b;
}

// Binary OR between two integers
int bitwise_or(int a, int b) {
    return a | b;
}

// Binary XOR between two integers
int bitwise_xor(int a, int b) {
    return a ^ b;
}

// Ones’ complement of an integer
int ones_complement(int a) {
    return ~a;
}

// Prints the leftmost 8 bits of a short integer
void print_leftmost_short(short a) {
    unsigned char leftmost = (unsigned char) (a >> 8);
    printf("%hhu\n", leftmost);
}

// Prints the rightmost 8 bits of a short integer
void print_rightmost_short(short a) {
    unsigned char rightmost = (unsigned char) a;
    printf("%hhu\n", rightmost);
}

int main() {
    int a = 0b10101010;
    int b = 0b11110000;
    printf("%d & %d = %d\n", a, b, bitwise_and(a, b));
    printf("%d | %d = %d\n", a, b, bitwise_or(a, b));
    printf("%d ^ %d = %d\n", a, b, bitwise_xor(a, b));
    printf("~%d = %d\n", a, ones_complement(a));
    short c = 0b0101010101111000;
    print_leftmost_short(c);
    print_rightmost_short(c);
    return 0;
}
