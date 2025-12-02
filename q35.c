// Write a C program to demonstrate pointer increment and decrement operations.
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *p;

    p = arr;   // pointer pointing to first element

    printf("Initial Pointer Address: %p, Value: %d\n", p, *p);

    // Pointer Increment
    p++;
    printf("After p++  Address: %p, Value: %d\n", p, *p);

    p++;
    printf("After another p++  Address: %p, Value: %d\n", p, *p);

    // Pointer Decrement
    p--;
    printf("After p--  Address: %p, Value: %d\n", p, *p);

    p--;
    printf("After another p--  Address: %p, Value: %d\n", p, *p);

    return 0;
}
