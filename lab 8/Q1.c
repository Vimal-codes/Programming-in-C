/*  STRING:  Let's see a simple example where a string is declared and being printed. 
The '%s' is used as a format specifier for the string in c language.*/

#include<stdio.h>  
#include <string.h>    
int main(){    
  char ch[11]={'j', 'a', 'v', 'a', 't', 'p', 'o', 'i', 'n', 't', '\0'};    
   char ch2[11]="javatpoint";    
    
   printf("Char Array Value is: %s\n", ch);    
   printf("String Literal Value is: %s\n", ch2);    
 return 0;    
}  