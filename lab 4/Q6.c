/*Write a program to calculate (1) Sum (2) Difference (3) Product (4)
Quotient (5) Remainder (6) Larger out of two given numbers using
switch statements.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num1, num2, choise;
    printf("Enter two numbers: ");
    scanf("%d %d",&num1, &num2);
    printf("1. Sum \n2. Difference \n3. Product \n4. Quotient \n5. Remainder \n6. Largest");
    printf("\nEnter the option for the operation you need to perform: ");
    scanf("%d",&choise);

    switch (choise)
    {
    case 1:
        printf("The sum of %d and %d is %d", num1, num2, num1+num2);
        break;
    case 2:
        printf("The Difference between %d and %d is %d", num1, num2, num1-num2);
        break;
    case 3:
        printf("The Product of %d and %d is %d", num1, num2, num1*num2);
        break;
    case 4:
        printf("The Quotient of %d and %d is %d", num1, num2, num1/num2);
        break;
    case 5:
        printf("The Remainder of %d and %d is %d", num1, num2, num1%num2);
        break;
    case 6:
        if(num1>num2){
            printf("The largest number is %d", num1);
        }
        else{
            printf("The largest number is %d", num2);
        }
        break;
    default:
        printf("Value is INVAID");
        break;
    }
}