/*
Using a generic function, write a function max that returns the maximum of an array
of integers.
*/

#include <stdio.h>

// Generic function to find the maximum of an array of elements
void *findMax(void *arr, int n, int size, int (*cmp)(void *, void *)) {
    void *max = arr;
    for (int i = 1; i < n; i++) {
        void *curr = (char *)arr + i * size;
        if (cmp(curr, max) > 0) {
            max = curr;
        }
    }
    return max;
}

// Comparison function for integers
int cmpInt(void *a, void *b) {
    int *x = (int *)a;
    int *y = (int *)b;
    if (*x < *y) {
        return -1;
    } else if (*x > *y) {
        return 1;
    } else {
        return 0;
    }
}

// Function to find the maximum of an array of integers
int max(int arr[], int n) {
    int *maxPtr = (int *)findMax(arr, n, sizeof(int), cmpInt);
    return *maxPtr;
}

int main() {
    int arr[] = {5, 2, 8, 3, 1, 9, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int maximum = max(arr, n);
    printf("Maximum: %d\n", maximum);
    return 0;
}
