/*Write a program that accepts a number and prints whether the
number is completely divisible by 5 or not.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%5 == 0){
        printf("%d is completely divisible by 5",num);
    }
    else{
        printf("%d is completely not divisible by 5",num);
    }
}