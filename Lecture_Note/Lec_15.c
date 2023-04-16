#include <stdio.h>

int main()
{
    int *x;
    int y=7;

    x=&y;
    printf("\nValue of y = %d and its address = %d", y, &y);
    printf("\nValue of x = %d and its address = %d", x, &x);
    printf("\nValue of *x = %d", *x);

    *x=9;
    printf("\nValue of x = %d and its address = %d. Value of y = %d\n", x, &x, y);
    x++;

    printf("\nNew value of x = %d and its address = %d", x, &x);
    printf("\nNew value of *x = %d", *x);
    return 0;
}