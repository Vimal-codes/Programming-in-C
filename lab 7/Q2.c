/*Write a program to read an integer array and to display only the even numbers of the array. */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100],i,limit;
    printf("Enter array limit: ");
    scanf("%d",&limit);

    printf("Enter the Values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Eveb numbers are: ");
    for(i=0;i<limit;i++){
        if(a[i]%2==0){
            printf("%d,",a[i]);
        }
    }
}