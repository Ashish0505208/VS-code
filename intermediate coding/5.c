//date 16 dec 2024
//1) Remove an element: Given an integer array arr and an integer key, write a program in C to return the number of values not equal to key.

#include<stdio.h>

int main() {
    int i, x, key, count = 0;
    // Ask the user for the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &x);
    // Declare an array of the given size
    int arr[x];
    // Prompt the user to enter the elements of the array
    printf("Enter the elements of array: ");
    for(i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }
    // Ask the user for the key value to search for
    printf("Enter the key: ");
    scanf("%d", &key);
    // Loop through the array and count how many values are not equal to the key
    for(i = 0; i < x; i++) {
        if(arr[i] != key) {
            count++;
        }
    }
    // Output the count of values not equal to the key
    printf("The number of values not equal to the key %d are: %d ", key, count);
}