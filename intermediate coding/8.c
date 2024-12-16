//4) Merging the strings: Given two strings str1 and str2 in two files file1 and file2, write a program to create a third string str3 with one character from each array alternatively. If one string is longer than the other, append the extra characters to str3. Write str3 into a different text file called file3.

#include <stdio.h>
#include <string.h>
int main() {
    char ch1[200], ch2[200], ch3[400];
    int i = 0, j = 0, k = 0;
    // Input the first string
    printf("Enter the first string:\n");
    scanf("%[^\n]%*c", ch1); // Read input until newline and discard newline
    // Input the second string
    printf("Enter the second string:\n");
    scanf("%[^\n]%*c", ch2); // Read input until newline and discard newline
    // Merge characters alternately from both strings
    while (ch1[i] != '\0' && ch2[j] != '\0') {
        ch3[k++] = ch1[i++]; // Add character from first string
        ch3[k++] = ch2[j++]; // Add character from second string
    }
    // Append remaining characters from the longer string
    while (ch1[i] != '\0') {
        ch3[k++] = ch1[i++]; // Add remaining characters from first string
    }
    while (ch2[j] != '\0') {
        ch3[k++] = ch2[j++]; // Add remaining characters from second string
    }
    // Null-terminate the merged string
    ch3[k] = '\0';
    //Print the merged string
    printf("Merged string: %s\n", ch3);
    // Write the merged string to a file
    FILE *file3 = fopen("file3.txt", "w");
    if (file3 == NULL) {
        printf("Error opening file3.txt for writing.\n");
        return 1;
    }
    // Write the merged string to the file
    fprintf(file3, "%s", ch3);
    // Close the file
    fclose(file3);
}