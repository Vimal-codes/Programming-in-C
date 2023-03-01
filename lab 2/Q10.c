/*Two numbers are input through the keyboard into two locations C and
D. Write a program to interchange the contents of C and D.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int C, D, Temp;
    printf("Enter a value: ");
    scanf("%d", &C);
    printf("Enter a value: ");
    scanf("%d", &D);
    printf("The value C is %d and D is %d",C,D);

    Temp = C;
    C = D;
    Temp = D;
    printf("\nThe interchange value of C is %d and D is %d",C,D);
}