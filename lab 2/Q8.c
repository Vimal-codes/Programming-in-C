//Write a program to accept two integer numbers from the user and to display its sum.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b, sum;
    printf("Enter a number: ");
    scanf("%d",&a);
    printf("Enter another number: ");
    scanf("%d",&b);

    sum = a + b;
    printf("The sum of %d and %d = %d",a, b, sum);
}