/*Mr. Kiran’s salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float d, r, s, g;
    printf("Krin's salary is: ");
    scanf("%f",&s);

    d = 0.4*s;
    r = 0.2*s;
    g = s + d + r;

    printf("dearness allocation of Kirn is : %f",d);
    printf("\nHouse rent of Kirn is : %f",r);
    printf("\nKiran's gross salary is : %f",g);
}