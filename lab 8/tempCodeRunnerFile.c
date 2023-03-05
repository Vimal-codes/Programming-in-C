#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[20];
    printf("Enter the string: ");
    scanf("%s",str);

    int l = strlen(str), flag=0;
    for(int i=0;i<l;i++){
        if(str[i]!=str[(l-i-1)]){
            flag =1;
        }
    }
    if(flag==1){
        printf("Not palindrome");
    }
    else{
        printf("Palindrome");
    }
}