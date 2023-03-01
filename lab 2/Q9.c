/*Write a program to accept the length and breadth of a rectangle and to 
display its area. (The length and breadth can be a real value)*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int l, b, area;
    printf("Enter the length: ");
    scanf("%d", &l);
    printf("Enter the breadth: ");
    scanf("%d",&b);

    area = l*b;
    printf("Area = %d",area);
}