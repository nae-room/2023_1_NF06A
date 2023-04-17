/*
Write a program that allows us to swap the values of two floating point variables.
Write an equivalent program that swaps the values of two characters
*/

#include <stdio.h>

int main()
{
    float a, b, temp;
    printf("===== 1st =====\n");
    printf("Enter the first floating-point value: ");
    scanf("%f", &a);

    printf("Enter the second floating-point value: ");
    scanf("%f", &b);

    printf("Before swapping:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("a = %.2f\n", a);
    printf("b = %.2f\n", b);

    char c1, c2, swap;
    printf("===== 2nd ====\n");
    printf("Enter the first character: ");
    scanf(" %c", &c1);

    printf("Enter the second character: ");
    scanf(" %c", &c2);

    printf("Before swapping:\n");
    printf("c1 = %c\n", c1);
    printf("c2 = %c\n", c2);

    swap = c1;
    c1 = c2;
    c2 = swap;

    printf("After swapping:\n");
    printf("c1 = %c\n", c1);
    printf("c2 = %c\n", c2);

    return 0;
}
