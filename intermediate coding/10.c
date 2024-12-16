//6) Move all zeros to the end: Given an integer array arr, return the array with all the zeros moved to the end of the array. The relative ordering of the non-zero lements should not change.

#include<stdio.h>
int main() {
    int n, i, z_count = 0;
    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    // Input the elements of the array
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Count the number of zeros in the array
    for(i = 0; i < n; i++) {
        if(arr[i] == 0) {
            z_count++;
        }
    }
    // Output the array after moving all zeros to the end
    printf("The array after moving all the zeros to the end is: [");
    // Print non-zero elements first
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            printf("%d ", arr[i]);
        }
    }
    // Then print all zeros
    for(i = 0; i < z_count; i++) {
        printf("0 ");
    }
    printf("]"); // Close the array
}