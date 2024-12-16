//10) Single occurence of a number: Given an array of integers which all numbers but one occuring twice, find the number that occurs only once.

#include<stdio.h>
int main() {
    int n, i, j, count = 0;
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Iterate through the array to find numbers that occur exactly once
    for(i = 0; i < n; i++) {
        count = 0; // Reset count for each element
        for(j = 0; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++; // Count occurrences of arr[i]
            }
        }
        // If the count is 1, this number occurs only once
        if(count == 1) {
            printf("The number that only occurs once is: %d\n", arr[i]);
        }
    }
}