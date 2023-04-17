/*
Given two integers A and B of type unsigned short and a floating point number C of type float with: A=104 and C=6.5.
Complete the following instructions (...) and add comments to each one:
• A += (...)C ;
• A = ∼A;
• B = Ab(A+2);
• C = (...)(A<<B);
• A = A&(...)C;
Would the results change if the integers A et B were of type int ?
*/

#include <stdio.h>

int main() {
    unsigned short A = 104;
    unsigned short B = 567;
    float C = 6.5;

    // A += (int)C;
    A += (int)C; // Add the integer part of C to A
    printf("A after adding integer part of C: %hu\n", A);

    // A = ~A;
    A = ~A; // Take the bitwise complement of A
    printf("A after bitwise complement: %hu\n", A);

    // B = Ab(A+2);
    B = A * B * (A + 2); // Compute B using the formula
    printf("B after computation: %hu\n", B);

    // C = (float)(A<<B);
    C = (float)(A << B); // Left shift A by B and cast the result to float
    printf("C after left shifting A by B: %f\n", C);

    // A = A&(~(unsigned short)C);
    A = A & (~(unsigned short)C); // Take the bitwise complement of C and perform bitwise AND with A
    printf("A after bitwise AND with complement of C: %hu\n", A);

    return 0;
}
