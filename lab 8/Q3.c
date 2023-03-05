/*Program should accept a number and revrse it*/

#include<stdio.h>
#include<stdlib.h>

int main(){
    int i, num, rev =0, rem;
    printf("Enter a number: ");
    scanf("%d",&num);

    //for reverse the nmber
    for(i=num;num!=0;num=num/10){
        rem=num%10;
        rev=(rev*10)+rem;
    }
    printf("revrse: %d",rev);
}
