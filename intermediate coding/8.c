//4) Merging the strings: Given two strings str1 and str2 in two files file1 and file2, write a program to create a third string str3 with one character from each array alternatively. If one string is longer than the other, append the extra characters to str3. Write str3 into a different text file called file3.

#include <stdio.h>
#include <string.h>

int main() {
    char ch1[200], ch2[200], ch3[400];
    int i = 0, j = 0, k = 0;
    // Input first string
    printf("Enter the first string:\n");
    scanf("%[^\n]%*c", ch1);
    // Input second string
    printf("Enter the second string:\n");
    scanf("%[^\n]%*c", ch2);
    // Merge characters alternately from both strings
    while (ch1[i] != '\0' && ch2[j] != '\0') {
        ch3[k++] = ch1[i++];
        ch3[k++] = ch2[j++];
    }
    // Append remaining characters from the longer string
    while (ch1[i] != '\0') {
        ch3[k++] = ch1[i++];
    }
    while (ch2[j] != '\0') {
        ch3[k++] = ch2[j++];
    }
    // Null-terminate the merged string
    ch3[k] = '\0';
    printf("Merged string: %s\n", ch3);
    FILE *file3 = fopen("file3.txt", "w");
    if (file3 == NULL) {
        printf("Error opening file3.txt for writing.\n");
        return 1;
    }
    fprintf(file3, "%s", ch3);
    fclose(file3);
}
