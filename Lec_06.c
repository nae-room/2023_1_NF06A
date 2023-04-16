#include <stdio.h>

void procedure()
{
    printf("The procedure has been executed\n");
}

void main()
{
    int i;
    i=0;

    printf("Hi, the procedure will be executed\n");

    procedure();
    i=i+1;          // i=1

    procedure();
    i=i+1;          // i=2

    printf("We have executed the procedure %d times\n",i);
}