/*
Write a program that returns the maximum and the minimum of two values. Assign
the maximum (respectively the minimum) to the variable max (respectively to min)
*/

#include <stdio.h>

int main()
{
    int a, b, max, min;

    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the second value: ");
    scanf("%d", &b);

    if (a > b) {
        max = a;
        min = b;
    } else {
        max = b;
        min = a;
    }

    printf("Maximum value is %d\n", max);
    printf("Minimum value is %d\n", min);

    return 0;
}
