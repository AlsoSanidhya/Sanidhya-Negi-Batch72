/*Define a structure Rectangle with members

int length;

int breadth;

Write a function inputRectangle() that takes input for a rectangle and returns it.

Write another function area(struct Rectangle r) that returns the area.*/

#include <stdio.h>
// Step 1: Define the structure
struct Rectangle {
    int length;
    int breadth;
};

// Step 2: Function to take input and return a Rectangle
struct Rectangle inputRectangle() {
    struct Rectangle r;

    printf("Enter length: ");
    scanf("%d", &r.length);

    printf("Enter breadth: ");
    scanf("%d", &r.breadth);

    return r;
}

// Step 3: Function to calculate area and return it
int area(struct Rectangle r) {
    return r.length * r.breadth;
}

int main() {
    struct Rectangle rect;

    rect = inputRectangle();     // Taking input using function

    int a = area(rect);          // Calculating area using function

    printf("Area = %d\n", a);

    return 0;
}
