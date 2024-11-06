// 1. Write a C program that defines a structure called Student to store the details of a student including name, roll number, and
// marks in three subjects (Physics, Chemistry, and Mathematics). The program should prompt the user to input the details of
// three students, store them in an array of Student structures, and then print the details of all students.


#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float physics;
    float chemistry;
    float mathematics;
};

int main() {
    struct Student students[3];
    
    // Input details for 3 students
    for(int i = 0; i < 3; i++) {
        printf("Enter details for Student %d\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]%*c", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);
        printf("Marks in Physics: ");
        scanf("%f", &students[i].physics);
        printf("Marks in Chemistry: ");
        scanf("%f", &students[i].chemistry);
        printf("Marks in Mathematics: ");
        scanf("%f", &students[i].mathematics);
    }
    
    // Output the details of all students
    printf("\nDetails of Students:\n");
    for(int i = 0; i < 3; i++) {
        printf("Student %d\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Physics: %.2f\n", students[i].physics);
        printf("Chemistry: %.2f\n", students[i].chemistry);
        printf("Mathematics: %.2f\n", students[i].mathematics);
        printf("\n");
    }
    
    return 0;
}
