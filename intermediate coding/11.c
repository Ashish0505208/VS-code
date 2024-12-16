//7) Is substring: Given two strings str1 and str2, write a program to return true if str2 is a substring of str1 and false otherwise.
#include<string.h>
#include<stdio.h>
int main(){
    int i,j,count=0;
    char ch1[100],ch2[100];
    printf("Enter the srimg 1: ");
    scanf("%[^\n]%*c",ch1);
    printf("Enter the string 2: ");
    scanf("%[^\n]%*c",ch2);
    if(strstr(ch1,ch2)!=NULL){
        printf("True");
    }
    else{
        printf("False");
    }
}