/*Write a program which reads in the degrees Fahrenheit from the user
and prints out the corresponding degree in Celsius. The conversion
formula is : C =(5/9)*(F – 32).*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int f;
    printf("Enter the tmep in degrees Fahrenheit: ");
    scanf("%d",&f);

    float c = 0.55*(f-32);

    printf("corresponding degree in Celsius: %f",c);

}