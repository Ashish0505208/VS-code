//7) Is substring: Given two strings str1 and str2, write a program to return true if str2 is a substring of str1 and false otherwise.
#include<string.h>
#include<stdio.h>
int main() {
    int i, j, count = 0;
    char ch1[100], ch2[100];
    // Input the first string
    printf("Enter the string 1: ");
    scanf("%[^\n]%*c", ch1); // Read input until newline and discard newline
    // Input the second string
    printf("Enter the string 2: ");
    scanf("%[^\n]%*c", ch2); // Read input until newline and discard newline
    // Check if string 2 is a substring of string 1
    if (strstr(ch1, ch2) != NULL) {
        printf("True"); // The second string is a substring of the first
    } else {
        printf("False"); // The second string is not a substring of the first
    }
}