/*Search a number from array*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int a[100], i, limit, Searchkey;
    printf("Enter the limit of the array: ");
    scanf("%d",&limit);
    printf("Enter the values: ");
    for(i=0;i<limit;i++){
        scanf("%d",&a[i]);
    }
    printf("Entered Values are: ");
    for(i=0;i<limit;i++){
        printf("%d,",a[i]);
    }
    printf("\nSearch Value: ");
    scanf("%d",&Searchkey);
    for(i=0;i<limit;i++){
        if(a[i]==Searchkey){
            printf("\nItem found on %d position",i+1);
            break;
        }
        
    }
    if(a[i]!=Searchkey){
            printf("\nEntered value is invaild");
        }
}