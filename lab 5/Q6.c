//Calculate the sum of first 10 numbers.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, sum=0;
    for ( i = 1; i <= 10; i++)
    {
        sum=sum+i;
    }
    printf("sum = %d", sum);
    
}