/*Read a number and find whether the given number is even or odd.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    printf("Enter a number");
    scanf("%d",&num);

    if(num%2==0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
}