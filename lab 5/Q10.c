//Read 10 numbers and find the largest.
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n, max=0;
    printf("Enter 10 numbers: ");
    for(i=1;i<=10;i++){
        scanf("%d",&n);
        if(n>max){
            max=n;
        }
    }
    printf("The largest number is %d",max);
}