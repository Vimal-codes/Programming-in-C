/*
         4
      4     3
   4     3     2
4     3     2     1  */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j;
    for(i=4;i>=1;i--){
        for(j=4;j>=(4-i);j--){
            printf("  ");
        }
        for(j=4;j>=i;j--){
            printf(" %d  ",j);
        }
        printf("\n");
    }
}