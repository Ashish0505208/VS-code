//5) String reversal: Given an string with words separated by empty spaces, commas or fullstops, write a program to return the string after removing the commas and fullstops and reversing the words in the string.

#include<stdio.h>
#include<string.h>

int main() {
    char ch1[100], ch2[100];
    int i, j = 0, count;
    // Input the string
    printf("Enter the string:\n");
    scanf("%[^\n]%*c", ch1); // Read input until newline and discard newline
    int l = strlen(ch1); // Calculate the length of the input string
    // Reverse the string excluding ',' and '.'
    for (i = l - 1; i >= 0; i--) {
        // Check if the current character is not ',' or '.'
        if (ch1[i] != ',' && ch1[i] != '.') {
            ch2[j++] = ch1[i]; // Add character to the reversed string
        }
    }
    ch2[j++] = '\0'; // Null-terminate the reversed string
    // Output the reversed string
    printf("The reversed string is: %s", ch2);
}