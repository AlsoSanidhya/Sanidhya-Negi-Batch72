//perform pointer arithmetic(increament and decrement) on pointers of different data types . oobserve how the memory addresses change and the effects on data access.
#include <stdio.h>
int main(){
    int a =10;
    float b=30.5;
    char c='A';

    int *p1 = &a;
    float *p2 = &b;
    char *p3 = &c;
    printf("Original address:\n");
    printf("p1(int)  = %p\n", p1);
    printf("p2(float)= %p\n", p2);
    printf("p3(char) = %p\n", p3);

    p1++; 
    p2++;   
    p3++;   
    printf("\nAfter Incre:\n");
    printf("p1(int)  = %p\n", p1);
    printf("p2(float)= %p\n", p2);
    printf("p3(char) = %p\n", p3);

    p1--;  
    p2--;   
    p3--;  
    printf("\nAfter Decre:\n");
    printf("p1(int)  = %p\n", p1);
    printf("p2(float)= %p\n", p2);
    printf("p3(char) = %p\n", p3);

    return 0;
}