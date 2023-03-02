//Print the even numbers from 1 to n
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("\n%d",i);
        }
    }
}