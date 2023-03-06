
#include<stdio.h>
#include<stdlib.h>

void readArray(int arr1[3][4]);
void readArray(int arr2[3][4]);
void sumArray(int arr1[3][4], int arr2[3][4], int sum[3][4]);
void displayArray(int sum[3][4]);

int main(){
    int arr1[3][4], arr2[3][4], sum[3][4];
    readArray(arr1);
    readArray(arr2);
    sumArray(arr1, arr2, sum);
    displayArray(sum);
}

void readArrayy(int arr1[3][4]){
    printf("Enter the values: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
}

void readArrayy(int arr2[3][4]){
    printf("Enter the values: ");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
}

void sumArray(int arr1[3][4], int arr2[3][4], int sum[3][4]){
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void displayArray(int sum[3][4]){
    printf("sum=\n ");
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
