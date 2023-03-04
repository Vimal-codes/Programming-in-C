/*Write a program to merge two sorted arrays into a single sorted array.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100], b[100], c[100], limit_a, limit_b, i, j, temp;

    printf("\nEnter the limit of array 1: ");
    scanf("%d", &limit_a);

    printf("\nEnter the values of 1st array: ");
    for(i=0;i<limit_a;i++){
        scanf("%d", &a[i]);
    }

    printf("\nEnter the limit of array 2: ");
    scanf("%d", &limit_b);

    printf("\nEnter the elements of 2nd array: ");
    for(i=0;i<limit_b;i++){
        scanf("%d", &b[i]);
    }

    //merge

    for(i=0;i<limit_a;i++){
        c[i]=a[i];
    }   
    for(i=0;i<limit_b;i++){
        c[i+limit_a]=b[i];
    }
    printf("\nElements of 3th array: ");
    for(i=0;i<(limit_a+limit_b);i++){
        printf("%d,",c[i]);
    }

    //sort

    for(i=0;i<((limit_a+limit_b)-1);i++){ //selection
        for(j=i+1;j<(limit_a+limit_b);j++){
            if(c[i] > c[j]){
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("\nSroted array is: ");
    for(i=0;i<(limit_a+limit_b);i++){
        printf("%d,",c[i]);
    }
}