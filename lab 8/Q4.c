/*Program should accept a number and display whether the number is a palindrome or not*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num, rev=0, rem, temp;
    printf("Enter the number: ");
    scanf("%d",&num);
    temp=num;

    while(num>0){
        rem=num%10;    
        rev=(rev*10)+rem;    
        num=num/10; 
    }
    if(temp == rev){
        printf("palindrome");
    }
    else{
        printf("Not");
    }

}