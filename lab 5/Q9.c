/*Calculate the sum of numbers from m to n.
Sample input and output:
Enter the start of the range: 3
Enter the end of the range: 6
Sum of the numbers from 3 to 6 is 18*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int i, m, n, sum=0;
    printf("Enter the start of the range: ");
    scanf("%d",&m);
    printf("Enter the end of the range: ");
    scanf("%d",&n);

    for(i=m;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum of %d from %d is %d",m, n, sum);
}