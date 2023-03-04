/*Write a program to accept a set of numbers and to display the deviation of each number from the average*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100], limit, i ,sum=0;
    printf("Enter the limit of the array: ");
    scanf("%d",&limit);

    printf("Enter the values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        sum = sum + a[i];
    }
    float avg=(float)sum/(float)limit;

    for(i=0;i<limit;i++){ //deviation
        float dev= a[i]- avg;
        printf("\ndeviation of %d = %f",a[i],dev);
    }

}