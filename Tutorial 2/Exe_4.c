/*
Write a recursive procedure that takes as parameter n and tests if n contains at least
a zero in its decimal form.
Here, we make the convention that the base 10 writing of zero is zero.
*/

#include <stdio.h>

int containsZero(int n) {
    // Base case: if n is zero, return true
    if (n == 0) {
        return 1;
    }
    
    // Recursive case: check if the last digit of n is zero
    if (n % 10 == 0) {
        return 1;
    } else {
        // Call the function recursively on the remaining digits of n
        return containsZero(n / 10);
    }
}

int main() {
    for (int i = 0; i < 50; i++) {
        if (containsZero(i)) {
            printf("%d contains at least one zero.\n", i);
        }
    }
    return 0;
}
