/*Write a program to determine whether an entered character is a vowel
or not.
Try as follows:
Switch(ch)
{
case ‘A’:
case ‘a’:
printf(“\n%c is a vowel”,ch);
break;
…..
…..
Remaining cases goes here
}*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
    case 'a':
        printf("\n%c is a vowel",ch);
        break;

    case 'E':
    case 'e':
        printf("\n%c is a vowel",ch);
        break;

    case 'I':
    case 'i':
        printf("\n%c is a vowel",ch);
        break;

    case 'O':
    case 'o':
        printf("\n%c is a vowel",ch);
        break;

    case 'U':
    case 'u':
        printf("\n%c is a vowel",ch);
        break;
    
    default:
        printf("\n%c is not a vowel",ch);
        break;
    }
}