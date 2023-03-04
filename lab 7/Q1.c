/*Write a program to read an array of integers of size 5 and print it. */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[5], i;
    printf("Enter 5 Values: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered Values are: ");
    for(i=0;i<5;i++){
        printf("%d,",a[i]);
    }
}