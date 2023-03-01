//Read a person’s age and determine whether he/she is eligible to vote. 
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a;
    printf("Enter the age: ");
    scanf("%d",&a);

    if(a>18){
        printf("You are eligible to vote.");
    }
    else{
        printf("You are not eligible to vote");
    }
}