/*

 *
 **
 *** 
 ****      */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, j ;
    for(i=1;i<=4;i++){ //1st loop for number of lines
        for(j=0;j<i;j++){ //2nd loop for printing *
            printf("*");
        }
        printf("\n");
    }
}