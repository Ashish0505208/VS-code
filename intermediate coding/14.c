//10) Single occurence of a number: Given an array of integers which all numbers but one occuring twice, find the number that occurs only once.

#include<stdio.h>
int main(){
    int n,i,j,count=0;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(i=0;i<n;i++){
        count=0;
        for(j=0;j<n;j++){
         if(arr[i]==arr[j]){
            count++;
         }
        }
        if(count==1){
            printf("the number the only occurs once is: %d\n",arr[i]);
        }
    }
}