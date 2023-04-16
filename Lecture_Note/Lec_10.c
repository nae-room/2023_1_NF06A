#include <stdio.h>

int main ()
{
    int S ,i;
    for ( printf(" Enter an integer between 1 and 10: "),
        scanf ("%d " ,&i);
        (i <=0 || i >10);
        printf( "\nEnter an integer between 1 and 10: "),
        scanf ("%d " ,&i) );
    printf ( "i = % d\n" , i);
    return 0;
}
