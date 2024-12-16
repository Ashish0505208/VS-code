//2) Remove duplicates from a given array: Given a sorted integer array arr, write a program in C to return the array after removing the duplicates, with all the other elements in place.

#include <stdio.h>
#include <stdbool.h>
int main() {
    int arr[50];  // Array to store input elements
    int arr1[50]; // Array for duplicate detection
    int n;
    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    // Prompt the user to enter the elements of the array
    printf("Enter the elements of array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Logic to remove duplicate elements from the array
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                // Shift elements to remove duplicates
                for(int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--; // Decrease the size of the array
            }
        }
    }
    // Output the array after deletion of duplicate elements
    printf("Array after deletion of duplicate elements: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}