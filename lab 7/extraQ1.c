/*adding the values(array)  */

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100], i, limit, sum=0;
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("enter the values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<limit;i++){
        sum=sum+a[i];
    }
    printf("sum = %d",sum);
}