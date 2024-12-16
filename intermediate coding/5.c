//date 16 dec 2024
//1) Remove an element: Given an integer array arr and an integer key, write a program in C to return the number of values not equal to key.

#include<stdio.h>
int main(){
    int i,x,key,count=0;
    printf("Enter the size of the array");
    scanf("%d",&x);
    int arr[x];
    printf("Enter the elements of array: ");
    for(i=0;i<x;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key: ");
    scanf("%d",&key);

    for(i=0;i<x;i++){
        if(arr[i]!=key){
            count++;
        }
    }

    printf("The number of values not equal to the key %d are: %d ",key,count);
}