/*Write a program to read a 2-D array of dimension 3X4 and display it like a matrix.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[3][4], i, j;

    printf("Enter the values: ");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENterd values are: \n");
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
}