//9) Maximum value subarray: Given an array of integers arr, return the maximum sum of a subarray (with contiguous elements) of that array.

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int max = arr[0];      
    int current = arr[0];  
    for (int i = 1; i < n; i++) {
        if (current + arr[i] > arr[i]) {
            current = current + arr[i];
        } else {
            current= arr[i];
        }
        if (current> max) {
            max = current;
        }
    }
    printf("The maximum sum of a subarray is: %d\n", max);
}
