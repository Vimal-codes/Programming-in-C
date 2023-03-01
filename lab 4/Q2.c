/*Write a program to read two numbers from the user and check
whether the first number is divisible by the second number or not.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1, num2;
    printf("Enter 1st number: ");
    scanf("%d",&num1);
    printf("Enter 2nd number: ");
    scanf("%d",&num2);

    if(num1%num2 == 0){
        printf("%d is completely divisible by %d",num1, num2);
    }
    else{
        printf("%d is completely not divisible by %d",num1, num2);
    }
}