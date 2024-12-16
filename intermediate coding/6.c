//2) Remove duplicates from a given array: Given a sorted integer array arr, write a program in C to return the array after removing the duplicates, with all the other elements in place.

#include <stdio.h>
#include<stdbool.h>


int main(){
    int arr[50];
    int arr1[50];
    int n;
    printf("Enter the size of the array:");
    scanf("%d",&n);
    printf("Enter the elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    //logic 1
    // int j=0;
    // for(int i=0;i<n;i++) {
    //     if(i==n-1 || arr[i]!=arr[i+1]) {
    //         arr[j++]=arr[i];
    //     }
    // }
    // n=j;

    //logic 2
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
            for (int k=j;k<n-1;k++) {
                    arr[k]=arr[k+1];
            }
            n--;
        }
    }
    }
    printf("array after deletion of duplicate elements:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}