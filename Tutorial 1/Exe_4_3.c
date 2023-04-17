/*
Write a program that computes the sum of two characters and their difference
*/

#include <stdio.h>

int main()
{
    char ch1, ch2;
    int sum, diff;

    printf("Enter the first character: ");
    scanf("%c", &ch1);

    printf("Enter the second character: ");
    scanf(" %c", &ch2);

    sum = ch1 + ch2;
    diff = ch1 - ch2;

    printf("a = %d, b = %d\n", ch1, ch2);
    printf("Sum of %c and %c is %d\n", ch1, ch2, sum);
    printf("Difference of %c and %c is %d\n", ch1, ch2, diff);

    return 0;
}
