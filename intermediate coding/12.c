//8) Is subsequence: Given two strings str1 and str2, write a program to return true if str2 is a subsequence of str1 and false otherwise.

#include<string.h>
#include<stdio.h>
#include<stdbool.h>
int main(){
    char ch1[100],ch2[100];
    int i,j,count=0;
    printf("Enter the string 1: ");
    scanf("%[^\n]%*c",ch1);
    printf("Enter the string 2: ");
    scanf("%[^\n]%*c",ch2);
    bool sub=true;
    for(i=0;i<strlen(ch2);i++){
        count=0;
        for(j=0;j<strlen(ch1);j++){
            if(ch2[i]==ch1[j]){
                count++;
            }
        }
        if(count>=1){
            sub=true;
        }
        else{
            sub=false;
        }
    }

    if(sub==true){
        printf("True");
    }
    else if(sub==false){
        printf("False");
    }
}