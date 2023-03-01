/*Read a number and test whether the number entered is positive or
negative.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>0){
        printf("POSITIVE");
    }
    else{
        printf("NEGATIVE");
    }
}