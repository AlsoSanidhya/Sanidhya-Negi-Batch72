//Perform pointer arithmatic (increment and decrement) on pointers of (integer data type ). Observe how the memory change and effects of data access 
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;   // p points to arr[0]

    printf("Initial:\n");
    printf("Address in p = %p, Value = %d\n\n", p, *p);

    // Increment pointer
    p++;
    printf("After p++:\n");
    printf("Address in p = %p, Value = %d\n\n", p, *p);

    // Decrement pointer
    p--;
    printf("After p--:\n");
    printf("Address in p = %p, Value = %d\n", p, *p);

    return 0;
}
