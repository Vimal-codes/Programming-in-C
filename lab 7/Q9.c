/*Write a program to insert an element in the correct position of a sorted integer array. */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int limit, a[100], i, j, temp ;
    printf("Enter the limit of the array: ");
    scanf("%d",&limit);

    printf("\nEnter the values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("\nEntered values are: ");
    for(i=0;i<limit;i++){
        printf("%d,",a[i]);
    }

    //sort the array

    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nNew array after sort is: ");
    for(i=0;i<limit;i++){
        printf("%d,",a[i]);
    }

    //insertion of an element

    int index, ele;
    printf("\nEnter the position to an element is to be inserted: ");
    scanf("%d",&index);
    printf("\nEnter Element to be inserted: ");
    scanf("%d",&ele);

    for(i=limit-1;i>=index;i--){
        a[i+1]=a[i];
    }
    a[index] = ele;

    printf("\nNew array after insertion is: ");
    for(i=0;i<limit+1;i++){
        printf("%d,",a[i]);
    }
}