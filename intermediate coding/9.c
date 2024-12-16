//5) String reversal: Given an string with words separated by empty spaces, commas or fullstops, write a program to return the string after removing the commas and fullstops and reversing the words in the string.

#include<stdio.h>
#include<string.h>
int main(){
    char ch1[100],ch2[100];
    int i,j=0,count;
    printf("Enter the string:\n");
    scanf("%[^\n]%*c", ch1);
    int l=strlen(ch1);
    for(i=l-1;i>=0;i--){
        if(ch1[i]!=',' && ch1[i]!='.'){
            ch2[j++]=ch1[i];
        }
    }
    ch2[j++]='\0';
    printf("the reversed string is: %s",ch2);
}