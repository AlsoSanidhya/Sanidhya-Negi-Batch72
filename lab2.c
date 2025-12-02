//write a program to check if a given number is even or odd using functions.
#include <stdio.h>
int evenorodd(int num) {
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    return 0;
}
int main() {
    int no;
    printf("Enter an integer: ");
    scanf("%d", &no);
    evenorodd(no);
    return 0;
}
