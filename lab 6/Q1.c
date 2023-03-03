/*Write a programto print the sum of the following series
  1+1/2+1/3+...+1/n.*/
  #include<stdio.h>
  #include<stdlib.h>
  int main(){
    int i, n, sum = 0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for ( i = 1; i <= n ; i++)
    {
        sum = sum + (i + 1);
    }
    printf("Sum = %d",sum);
    
  }