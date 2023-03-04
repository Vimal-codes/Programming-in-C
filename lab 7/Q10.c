/*Write a program to merge two integer arrays of size 5 into a third array.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
     int a[5], ar[5], arr[10], i;
     printf("\nEnter values to 1 st array: ");
     for(i=0;i<5;i++){
        scanf("%d",&a[i]);
     }
     printf("\nEnter values to 2 nd arrat: ");
     for(i=0;i<5;i++){
        scanf("%d",&ar[i]);
     }

     printf("\nentered values of 1st array is: ");
     for(i=0;i<5;i++){
        printf("%d,",a[i]);
     }
     printf("\nentered values of 2nd array is: ");
     for(i=0;i<5;i++){
        printf("%d,",ar[i]);
     }

     //merge two array
     for(i=0;i<5;i++){
        arr[i]=a[i];
        arr[i+5]=ar[i];
     }
     printf("\nMerged array is : ");
     for(i=0;i<10;i++){
        printf("%d,",arr[i]);
     }

}