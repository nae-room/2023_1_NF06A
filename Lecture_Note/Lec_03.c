#include <stdio.h>

int imax(int n, int m)
{
    int max;

    if (n>m) max = n;
    else max = m;

    return max;
}