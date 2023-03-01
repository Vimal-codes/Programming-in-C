/*. Accept two numbers from the user and find out the largest (using if-else)*/
#include<stdio.h>
#include<stdio.h>
int main(){
    int num1, num2;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);

    if(num1>num2){
        printf("Largest number is %d",num1);
    }
    else if(num2>num1){
        printf("Largest number is %d",num2);
    }
    else{
        printf("Entered value is equal");
    }
}