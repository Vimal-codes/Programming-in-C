/*Read an amount of seconds from the user and outputs the equivalent
amount of minutes and the equivalent number of hours.
Sample Input: 3723
Sample Output: 1 Hours 2 Minutes 3 Seconds
The program should issue appropriate error messages if the user types
negative values as the input*/

#include<stdio.h>
#include<stdlib.h>
int main(){
    int s, hrs, min, sec;
    printf("Enter amount of seconds: ");
    scanf("%d",&s);

    if(s>0){
        hrs = s/3600;
        min = (s - (hrs*3600))/60;
        sec = (s-(hrs*3600)-(min*60));

        printf("%d Hours %d Minutes %d Seconds\n",hrs,min,sec);
    }
    else
    {
        printf("Error! Check the value of Seconds again!\n");
    }
    
}