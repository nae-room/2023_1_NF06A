#include <stdio.h>

void main ()
{
    char tab []={'2','5','7','r'};
    int i;
    printf ( "\nSize = %d " ,sizeof (tab)) ;
    printf ( "\nMemory address of tab [0]: %d , tab [1]:%d" ,&tab[0] , &tab[1]) ;
    printf ( "\nMemory address of pointer tab : %d , tab+2: %d\n" ,&tab[0] , &tab[2]) ;

    for (i =0; i <4; i ++)
        printf ( "\nValue of tab[%d]= %c , of *(tab+%d) = %c " ,i , tab[i] ,i,*(tab+i));
}