//how to print and scan 2d array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j, a[3][3];
    printf("Enter the values: ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("Entered the values: \n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
