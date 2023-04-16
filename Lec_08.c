#include <stdio.h>

#define M_PI 3.14159265358979323846
#define YEAR 2007

int main()
{
   
printf (" Characters : %c %c %c %c\n" , 'a', 65 , 0x30 , '0');
printf (" Integers : %d % ld \n" , YEAR , 650000) ;
printf (" With spaces : |%10d|\n" , YEAR );
printf (" With zeros : |%010d|\n" , YEAR );
printf (" Using different systems : %d % x % o %# x %# o \n" , 100 , 100 , 100 , 100 ,100) ;
printf (" Floating point : |%4.2f| |%+.4e| |%E|\n " , M_PI , M_PI * YEAR , M_PI );
printf (" Length of an argument : |%*d|\n" , 5, 10) ;
printf ("% s\n" , " Debian GNU / Linux ");
return 0;
 
}