/*Enter a number and print its multiplication table.//void multTable(int)*/
#include<stdio.h>
#include<stdlib.h>

void multTable(int n);

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    multTable(n);
}

void multTable(int n ){
    

    for(int i=1;i<=10;i++){
        printf("\n%d x %d = %d",n, i, n*i);
    }
}