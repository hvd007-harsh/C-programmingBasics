#include<stdio.h>

int main(){
int drome, num,palindrome=0;
printf("Enter the number for checking the Palindrome\n");
scanf("%d",&num);
int num1 = num;
do{
drome =num%10;
  palindrome  = palindrome*10 + drome;
   num = num/10;
} while(num>0);
num1 == palindrome ? printf("Your number is palindrome\n") : printf("Your number is not Palindrome");
return 0 ;
}
