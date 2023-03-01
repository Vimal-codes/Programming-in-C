/*Write a program to calculate the bill of a DTP work as follows. Use ifelse statement
1. The rate of typing Rs. 3/Page
2. Printing of first copy Rs.5/page and later every copy Rs.3/Page.
The user should enter the number of pages and number of copies
he/she wants.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int p, c, cost;
    printf("Enter the numbers of pages: ");
    scanf("%d",&p);
    printf("\nEnter the number of copies: ");
    scanf("%d",&c);

    cost = 3 * p;

    if(c == 1){
        cost = cost +(p*5);
        printf("\nTotal amount to be paid is RS. %d",cost);
    }
    else if (c > 1){
        cost = cost +(p*5) + ((p*3)*(c-1));
        printf("\nTotal amount to be paid is RS. %d",cost);
    }
}