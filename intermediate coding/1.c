#include<stdio.h>
int main(){
    int arr[50];
    int key,n;
    int count=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    printf("enter the elements of array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the key element:");
    scanf("%d",&key);
    for(int i=0;i<n;i++){
        if (arr[i]!=key){
            printf("%d ",arr[i]);
            count++;
    }
}
printf("\n%d",count);
}