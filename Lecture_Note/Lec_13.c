#include <stdio.h>

void main()
{
    char tab[7];
    int i;
    for(i=0; i<=6; i++)
    {
        tab[i]=(char)i+100;
        printf("tab[%d] = %c\n",i,tab[i]);
    }
}