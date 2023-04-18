/*
Write a program that performs a swap between the content of two integer arrays of
length 10. Is it possible to perform the swap without looping over the two arrays?
*/

#include <stdio.h>
#include <string.h>

#define SIZE 10

int main() {
    int array1[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int array2[SIZE] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    int temp[SIZE];

    printf("Before swap:\n");

    printf("array1: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("array2: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    memcpy(temp, array1, sizeof(array1));
    memcpy(array1, array2, sizeof(array2));
    memcpy(array2, temp, sizeof(temp));

    printf("After swap:\n");

    printf("array1: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("array2: ");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}
