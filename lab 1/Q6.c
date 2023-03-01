//Read two numbers and print its all operations.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b, sum, sub, multi, quotient, remainder;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    sum = a + b;
    sub = a - b;
    multi = a*b;
    quotient = a/b;
    remainder = a%b;
    printf("sum = %d", sum);
    printf("\nSubtraction = %d", sub);
    printf("\nMultiplication = %d", multi);
    printf("\nquo = %d", quotient);
    printf("\nRem = %d", remainder);
}