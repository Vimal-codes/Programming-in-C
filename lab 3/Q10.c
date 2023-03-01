/*Accept three numbers from the user and find out the largest (using ifelse)*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a, b, c;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("Enter 3rd number: ");
    scanf("%d",&c);

    if(a>b)
    {
        if(a>c)
            printf("%d is the Largest\n",a);
        else
            printf("%d is the Largest\n",c);
    }
    else if(b>a)
    {
        if(b>c)
            printf("%d is the Largest\n",b);
        else
            printf("%d is the Largest\n",c);
    }
    else if (a == b == c)
    {
        printf("They All are same\n");
    }
    else
    {
        printf("Please enter a valid number!\n");
    }
}