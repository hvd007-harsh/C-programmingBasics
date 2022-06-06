/*
Feed the number , input , feed
Take input
reminder = input % 2
remainder == 0  Even
remainder != 0 Odd

*/
#include <stdio.h>


int main(){
int number,reminder;
printf("Enter the number of input to check \n");
scanf("%d",&number);
reminder = number % 2;
if( reminder == 0 ){
printf("The number which you entered in the input is Even");
}else{
printf("The number which you entered in the input is Odd");
}
}
