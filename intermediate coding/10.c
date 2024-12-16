//6) Move all zeros to the end: Given an integer array arr, return the array with all the zeros moved to the end of the array. The relative ordering of the non-zero lements should not change.

#include<stdio.h>
int main(){
    int n,i,z_count=0;
    printf("enter the size of array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        if(arr[i]==0){
            z_count++;
        }
    }
    printf("The array after moving all the zeros to the end is: ");
    printf("[");
    for(i=0;i<n;i++){
        if(arr[i]!=0){
            printf("%d ",arr[i]);
        }
    }
    for(i=0;i<z_count;i++){
        printf("0 ");
    }
    printf("]");
}