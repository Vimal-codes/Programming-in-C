/*If the marks obtained by a student in five different subjects are input
through the keyboard, find out the aggregate marks and percentage of 
marks obtained by the student. Assume that the maximum marks
that can be obtained by a student in each subject are 100.*/
#include<stdio.h>
#include<stdlib.h>
int main(){
    float math, sc, ss, eng, mala, total, percent;
    printf("Enter the mark of Maths: ");
    scanf("%f",&math);
    printf("Enter the mark of Science: ");
    scanf("%f",&sc);
    printf("Enter the mark of Social Science: ");
    scanf("%f",&ss);
    printf("Enter the mark of English: ");
    scanf("%f",&eng);
    printf("Enter the mark of Malayalam: ");
    scanf("%f",&mala);

    total = math+sc+ss+eng+mala;
    percent = (total/500)*100;
    printf("The Aggregate mark is %f and percentage is %f",total, percent);
}