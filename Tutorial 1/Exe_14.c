/*
Write a program that reads a string of length 10 and prints for each character its
corresponding ASCII code in binary, octal, decimal and hexadecimal.
*/

#include <stdio.h>
#include <string.h>

#define STR_LEN 10

int main() {
    char str[STR_LEN+1]; // Array to store the string (plus one for the null terminator)
    int i;

    // Read a string of length 10 from the user
    printf("Enter a string of length %d: ", STR_LEN);
    scanf("%10s", str);

    // Print the ASCII code of each character in the string
    for (i = 0; i < STR_LEN; i++) {
        printf("%c: binary = %08d, octal = %03o, decimal = %d, hexadecimal = 0x%02X\n",
            str[i], str[i], str[i], str[i], str[i]);
    }

    return 0;
}
