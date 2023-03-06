/*Rewrite the above program using the following functions
 a.void readArray(int[3][4]);
b.void displayArray(int[3][4]);*/

#include<stdio.h>
#include<stdlib.h>

void readArray(int ar[3][4]);
void displayArray(int ar[3][4]);

int main(){
    int ar[3][4];
    readArray(ar);
    displayArray(ar);
}

void readArray(int ar[3][4]){
    printf("Enter the values: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&ar[i][j]);
        }
    }
}

void displayArray(int ar[3][4]){
    printf("Entered values are:\n ");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",ar[i][j]);
        }
        printf("\n");
    }
}