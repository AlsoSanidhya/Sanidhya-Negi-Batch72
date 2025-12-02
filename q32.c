/*Write a function to reverse a string (accepts a string argument).
Write a C program that invokes this function to find the reverse of a given string*/

#include <stdio.h>
#include <string.h>

// Function to reverse a string
void reverseString(char str[]) {
    int i, len, temp;
    len = strlen(str); // find length

    // swap characters from start and end
    for (i = 0; i < len/2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);   // reads input string

    reverseString(str); // calling function

    printf("Reversed string = %s\n", str);

    return 0;
}
