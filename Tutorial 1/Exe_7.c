/*
The area A of a triangle is given according to the formula A = BH/2 with B is the base of the triangle and H is its corresponding height.
• Declare the two integer variables B and H. What are the value of these variable?
• Declare an integer variable A and assign the value of A according to the expression of the area.
• Compute and print the area A of a triangle of base B = 7 and height of H = 9.
*/

#include <stdio.h>

int main()
{
    int B = 7;
    int H = 9;
    int A = B*H/2;
    printf("The area is %d\n",A);
    return 0;
}