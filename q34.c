// Write a C program to perform addition and subtraction of two numbers using functions for reading, writing, addition, and subtraction.
#include <stdio.h>

// Structure to store two numbers
struct Numbers {
    int a;
    int b;
};

// Function to read values
struct Numbers readNumbers() {
    struct Numbers n;
    printf("Enter first number: ");
    scanf("%d", &n.a);
    printf("Enter second number: ");
    scanf("%d", &n.b);
    return n;
}

// Function to write (display) values
void writeNumbers(struct Numbers n) {
    printf("You entered: a = %d, b = %d\n", n.a, n.b);
}

// Function for addition
int addition(struct Numbers n) {
    return n.a + n.b;
}

// Function for subtraction
int subtraction(struct Numbers n) {
    return n.a - n.b;
}

int main() {
    struct Numbers nums;
    int add, sub;

    nums = readNumbers();      // Reading
    writeNumbers(nums);        // Writing

    add = addition(nums);      // Addition
    sub = subtraction(nums);   // Subtraction

    printf("Addition = %d\n", add);
    printf("Subtraction = %d\n", sub);

    return 0;
}
