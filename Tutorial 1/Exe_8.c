/*
The volume of a cone V is given by the formula V = BH/3 where H is the height of
the cone and B is the area of its circular base. B is given by the formula B = πR2 where
R is the radius of the circular base.
• Declare two integer variables R and H.
• Define a constant PI = 3.1416 (use #define). Write an instruction that prints its
value.
• Compute and print the volume of the cone for R = 5, H = 10. Limit the printed
value to two digits after point.
*/

#include <stdio.h>

#define pi 3.1416

int main()
{
    int R = 5;
    int H = 10;
    float B = pi*R*R;
    float V = B*H/3;

    printf("V : %.2f", V);

    return 0;
}