#include <stdio.h>
#define m 7           // Constant m is defined

// Define a new structure couple
typedef struct {int l; int j;} couple;

void main()
{
    couple cup;         // define variable cup
    cup.j=m; cup.l=2;   // initialize variable cup
    // cup.j=m=7 cup.l=2

    printf("Sum = %d\n", cup.j+cup.l);
    // cup.j+cup.l = 7+2 = 9
}
