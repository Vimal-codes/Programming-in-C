/*Given a character as input, check if it is a vowel. Print YES if it is so,
otherwise NO.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    char ltr;
    printf("Enter a character: ");
    scanf("%c",&ltr);

    if(ltr == 'a' || ltr == 'e' || ltr == 'i'|| ltr == 'o' || ltr == 'u' || ltr == 'A' || ltr == 'E' || ltr == 'I' || ltr == 'O' || ltr == 'U'){
        printf("YES");
    } 
    else{
        printf("NO");
    }
}