/*Write a program to accept 10 numbers from the user and to find out the largest and smallest of those. */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[10], i, largest, smallest;
    printf("Enter 10 values: ");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]);
    }

    largest = a[0];
    smallest = a[0];

    for(i=0;i<10;i++){
        if(a[i]>largest)
        largest = a[i];
    }
    
    printf("\nlargest:%d",largest);

    for(i=0;i<10;i++){
        if(a[i]<smallest)
        smallest = a[i];
    }
    printf("\nsmallest:%d",smallest);
}