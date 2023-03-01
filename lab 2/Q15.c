/*The length and breadth of a rectangle and radius of a circle are input
through the keyword. Write a program to calculate the area and
perimeter of the rectangle, and the area and circumference of the circle.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int l, b ,r, ar, pr, ac, c;
    printf("Enter the lenght of the rectangle: ");
    scanf("%d",&l);
    printf("\nEnter the breadth of the rectangle: ");
    scanf("%d",&b);
    printf("\nEnter the radius: ");
    scanf("%d",&r);

    ar = l*b;
    pr = 2*(l+b);
    ac = 3.14*r*r;
    c = 2*3.14*r;

    printf("\nArea of rectangle: %d",ar);
    printf("\nPerimeter of rectangle: %d",pr);
    printf("\nArea of circle: %d",ac);
    printf("\nCircumference pf the cricle:%d",c);
}