//9) Maximum value subarray: Given an array of integers arr, return the maximum sum of a subarray (with contiguous elements) of that array.

#include <stdio.h>
int main() {
    int n;
    // Input the size of the array
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];       // Initialize the maximum sum as the first element
    int current = arr[0];   // Initialize the current sum as the first element
    // Iterate through the array
    for (int i = 1; i < n; i++) {
        // Update the current sum: either add the current element or start a new subarray
        if (current + arr[i] > arr[i]) {
            current = current + arr[i];
        } else {
            current = arr[i];
        }
        // Update the maximum sum if the current sum is greater
        if (current > max) {
            max = current;
        }
    }
    // Output the maximum sum of a subarray
    printf("The maximum sum of a subarray is: %d\n", max);
}