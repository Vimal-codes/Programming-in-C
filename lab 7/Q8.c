/*Write a program to delete a number from an integer array*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int limit, i, a[100], del, index=0;
    printf("Enter the limit of the array: ");
    scanf("%d",&limit);
    printf("Enter the numbers: ");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("\nEnter values are: ");
    for(i=0;i<limit;i++){
        printf("%d,",a[i]);
    }
    printf("\nEnter the number to be deleted: ");
    scanf("%d",&del);
    for(i=0;i<limit;i++){
        if(a[i]==del){
            index = i;
            break;
        }
    }
    for(i=index;i<(limit-1);i++){ 
        a[i]=a[i+1];
    }
    printf("New array: ");
    for(i=0;i<(limit-1);i++){
        printf("%d,",a[i]);
    }
    

}