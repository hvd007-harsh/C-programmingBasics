#include<stdio.h>


int main(){
int num;
puts("Hi welcome to the feedback menu");
puts("\t\t\tWELCOME TO FEEDBACK MENU");
puts("ENTER THE VALUE OF RATINGS FROM 0 TO 5");
scanf("%d",num);
 switch(num){
 case 0:
     puts("VERY BAD\n");
 case 1:
     puts("BAD\n");
 case 2:
     puts("MODERATE\n");
 case 3:
    puts("GOOD\n");
 case 4:
    puts("VERY GOOD\n");
 case 5:
    puts("EXCELLENT\n");
 default:
    puts("ENTER A VALID KEY TRY AGAIN\n");
 }
return 0;
}
