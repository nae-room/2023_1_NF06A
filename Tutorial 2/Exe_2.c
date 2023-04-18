/*
Analyze the program that tests if an integer is a prime number (seen in the lecture).
Print all the prime numbers less than 50.
*/

#include <stdio.h>

int main() {
    int n, i, isPrime;

    for (n = 2; n <= 50; ++n) {
        isPrime = 1;

        if (n == 1) {
            continue;
        }

        for (i = 2; i <= n/2; ++i) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime == 1) {
            printf("%d ", n);
        }
    }

    return 0;
}
