/*. Write a program to enter any character. If the entered character is in
lower case, then convert it into upper case and if it is a upper case
character then convert it into lower case.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    char ltr;
    printf("Enter a character: ");
    scanf("%c",&ltr);
    if(ltr >= 65 && ltr <= 90){
        printf("Entered character is in upper case");
        ltr = ltr + 32;
        printf("\nLower case:%c",ltr);
    }
    else if(ltr >= 97 && ltr <= 122){
        printf("Entered character is in lower case");
        ltr = ltr - 32;
        printf("\nUpper case:%c",ltr);
    }
    else{
        printf("Enterd value is invaild");
    }
}