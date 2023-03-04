/*Write a program to implement linear search. */
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100], limit, i, Searchkey;

    printf("Enter the limit of the array: ");
    scanf("%d",&limit);

    printf("Enter the values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter the value to be searched: ");
    scanf("%d",&Searchkey);
    for(i=0;i<limit;i++){
        if(a[i]==Searchkey){
            break;
        }
    }
    
    if(i<limit){
        printf("Element found at index %d ",i);
    }
    else{
        printf("Element not found");
    }
}