/*Let's see an example of counting the number of vowels in a string.*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    char s[100];
    int count = 0, i, limit;

    printf("Enter the limit of the array: ");
    scanf("%d",&limit);
    printf("Enter a charater: ");
    scanf("%s",s);   
      


    for(i=0;i<11;i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    printf("number of vowels in a string:%d",count);
}