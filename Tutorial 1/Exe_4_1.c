/*
Write a program that computes the sum of two non zero integers, their difference,
product, quotient and remainder of the euclidean division.
*/

#include <stdio.h>

int main()
{
    int a, b;
    int sum, dif, pro, quo, rem;
    printf("Enter two non zero integers : ");
    scanf("%d %d", &a, &b);

    sum = a+b;
    dif = a-b;
    pro = a*b;
    quo = a/b;
    rem = a%b;

    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", dif);
    printf("Product: %d\n", pro);
    printf("Quotient: %d\n", quo);
    printf("Remainder: %d\n", rem);

    return 0;
}