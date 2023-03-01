/*Write a program to calculate simple interest. Accept P, N and R from
user. Use float where ever necessary.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int p, n;
    float s, r;
    printf("Enter the Principal value: ");
    scanf("%d",&p);
    printf("Enter the Interest rate: ");
    scanf("%f",&r);
    printf("Enter the Time: ");
    scanf("%d",&n);

    s  = (p*r*n)/100;

    printf("Simple Interest = %f",s);
}