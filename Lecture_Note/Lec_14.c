#include <stdio.h>

void main()
{
    int t[][2]={1,2,3,4};
    int i,j;
    t[2][0] = 5;
    t[2][1] = 5;

    for(i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
            printf("t[%d][%d] = %d\n", i, j, t[i][j]);
    }
}