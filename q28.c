//Write a C program to define a structure called Student with the following members:
//name (string of max 50 characters)
//SAP ID (integer)
//marks (float)
//Create an array of 5 students, take input for each, and display the details of all students
#include <stdio.h>

// Define structure
struct Student {
    char name[50];
    int sap_id;
    float marks;
};

int main() {
    struct Student s[5];  // Create array for 5 students
    int i;

    // Input details of students
    for (i = 0; i < 5; i++) {
        printf("\nEnter details of student %d:\n", i + 1);

        printf("Enter name: ");
        scanf(" %[^\n]", s[i].name);   // take string input with spaces

        printf("Enter SAP ID: ");
        scanf("%d", &s[i].sap_id);

        printf("Enter marks: ");
        scanf("%f", &s[i].marks);
    }

    // Display all details
    printf("\n--- Details of All Students ---\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", s[i].name);
        printf("SAP ID: %d\n", s[i].sap_id);
        printf("Marks: %.2f\n", s[i].marks);
    }

    return 0;
}
