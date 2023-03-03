 #include<stdio.h>
  #include<stdlib.h>
  int main(){
    int i, j;
    for(i=1;i<=9;i++){ //1st loop for number of lines
        for(j=0;j<(9/2);j++){ //2nd loop for printing *
            printf("*");
        }
        printf("\n");
    }
  }