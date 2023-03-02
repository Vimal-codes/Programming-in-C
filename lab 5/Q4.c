//Print the numbers from n to 1
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=n;i>=1;i--){
        printf("\n%d",i);
    }
}