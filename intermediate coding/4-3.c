// 3. Write a C program that defines a structure called Employee to store the details of an employee including name, ID, and
// salary. The program should then create a pointer to an Employee structure and allocate memory for it dynamically using
// malloc(). After allocating memory, prompt the user to input the details of an employee using the pointer, and then print the
// details of the employee

#include <stdio.h>
#include <stdlib.h>

struct Employee {
    char name[100];
    int id;
    float salary;
};

int main() {
    // Create a pointer to Employee structure
    struct Employee *emp;

    // Dynamically allocate memory for one Employee
    emp = (struct Employee *)malloc(sizeof(struct Employee));
    
    // Check if memory allocation was successful
    if (emp == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit the program with an error code
    }

    // Prompt user for employee details
    printf("Enter employee name: ");
    fgets(emp->name, sizeof(emp->name), stdin); // Use fgets to read string input

    printf("Enter employee ID: ");
    scanf("%d", &emp->id);

    printf("Enter employee salary: ");
    scanf("%f", &emp->salary);

    // Print the details of the employee
    printf("\nEmployee Details:\n");
    printf("Name: %s", emp->name);
    printf("ID: %d\n", emp->id);
    printf("Salary: %.2f\n", emp->salary);

    // Free the allocated memory
    free(emp);

    return 0;
}