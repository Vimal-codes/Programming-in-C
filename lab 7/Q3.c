/*Write a program to read a floating point array and to display it in the reverse order.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float a[100];
    int i, limit;
    printf("Enter the limit of the array: ");
    scanf("%d",&limit);
    printf("Enter the values: ");
    for(i=0;i<limit;i++){
        scanf("%f",&a[i]);
    }
    for(i=limit-1;i>=0;i--){
        printf("\nEntered values in reverse order: %f",a[i]);
    }
}