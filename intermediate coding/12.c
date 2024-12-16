//8) Is subsequence: Given two strings str1 and str2, write a program to return true if str2 is a subsequence of str1 and false otherwise.

#include<string.h>
#include<stdio.h>
#include<stdbool.h>
int main() {
    char ch1[100], ch2[100];
    int i, j, count = 0;
    bool sub = true; // Assume initially that ch2 is a substring of ch1
    // Input the first string
    printf("Enter the string 1: ");
    scanf("%[^\n]%*c", ch1); // Read input until newline and discard newline
    // Input the second string
    printf("Enter the string 2: ");
    scanf("%[^\n]%*c", ch2); // Read input until newline and discard newline
    // Check each character of ch2 against ch1
    for(i = 0; i < strlen(ch2); i++) {
        count = 0; // Reset count for each character in ch2
        for(j = 0; j < strlen(ch1); j++) {
            if(ch2[i] == ch1[j]) {
                count++; // Increment count if characters match
            }
        }
        if(count < 1) {
            sub = false; // If any character of ch2 isn't found in ch1, it's not a substring
            break; // No need to check further
        }
    }
    // Output the result
    if(sub == true) {
        printf("True"); // ch2 is a substring of ch1
    } else {
        printf("False"); // ch2 is not a substring of ch1
    }
}