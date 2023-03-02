/*Write a program to print the list of all leap years from 1900 to 2100.
[Note: Leap year comes once in every four years E.g. 1996, 2004, 2016.End of century is not always a leap year.
 E.g. 2100, 2300.Leap year comes after every 400 years. E.g. 2000, 2400, 2800]//void leapYear()*/

 #include<stdio.h>

 void leapYear();

 int main(){
    leapYear();
 }

 void leapYear(){
    int year;
    for (year=1900;year<=2100;year++)
    {
        if ((year%4==0 && year%100!=0)||(year%400==0))
            printf("%d\n",year);
    }
}