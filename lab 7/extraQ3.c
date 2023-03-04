/*Write a program to sorting integer array. */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int limit, i, a[100], j, temp;
    printf("Enter the limit of the array: ");
    scanf("%d",&limit);

    printf("Enter the values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("\nEntered values are: ");
    for(i=0;i<limit;i++){
        printf("%d,",a[i]);
    }

    //sort the array

    for(i=0;i<limit-1;i++){ //for loop for selecting elements to compared(1st element then after execution next one...go on)
        for(j=i+1;j<limit;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nSorted array is: ");
    for(i=0;i<limit;i++){
        printf("%d,",a[i]);
    }
}