/*Read a number and test whether a number entered is positive or negative
or equal to zero*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>0){
        printf("%d is POSITIVE",num);
    }
    else if(num<0){
        printf("%d is NEGATIVE",num);
    }
    else{
        printf("entered value is equal to 0");
    }
}