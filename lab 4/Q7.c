/*Remove break statements from the above program and test. What is
the difference?*/
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
        
    case 2:
        printf("The Difference between %d and %d is %d", num1, num2, num1-num2);
        
    case 3:
        printf("The Product of %d and %d is %d", num1, num2, num1*num2);
        
    case 4:
        printf("The Quotient of %d and %d is %d", num1, num2, num1/num2);
        
    case 5:
        printf("The Remainder of %d and %d is %d", num1, num2, num1%num2);
        
    case 6:
        if(num1>num2){
            printf("The largest number is %d", num1);
        }
        else{
            printf("The largest number is %d", num2);
        }
        
    default:
        printf("Value is INVAID");
        
    }
}
/*Answer : The difference is that without break,
the program doesnt stop after the called switch it carries on and runs the other switches as well*/