/*A company decides to give bonus to all its employees on NewYear. A 5%
bonus on salary is given to the male employees and 10% bonus on salary
to the female employees. Write a program to enter the salary and gender
of the employees. If the salary of the employee is less than Rs 10,000
then the employee gets an extra 2% bonus on the salary. Calculate the 
bonus that has to be given to the employee and display the salary that
the employee will get.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float s, b;
    char n;
    printf("Male (M) or Female (F) : ");
    scanf("%c",&n);
    printf("Enter the salary: ");
    scanf("%f",&s);

    if(n == 'M' || n == 'm'){
        if(s >= 10000){
            b = 0.07*s;
            s = s + b;
            printf("bonus = %f", b);
            printf("salary = %f", s);
        }
        else{
            b = 0.05*s;
            s = s + b;
            printf("bonus = %f", b);
            printf("salary = %f", s);
        }
    }
    else  if(n == 'F' || n == 'f'){
        if(s >= 10000){
            b = 0.12*s;
            s = s + b;
            printf("bonus = %f", b);
            printf("salary = %f", s);
        }
        else{
            b = 0.10*s;
            s = s + b;
            printf("bonus = %f", b);
            printf("salary = %f", s);
        }
    }
}