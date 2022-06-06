#include<stdio.h>


int main(){
int sum,p,q;
//pointer  p , q
puts("Enter the value of sum number 1 and number 2");
scanf("%d%d",&p,&q);
int *num,*num1;
num=&p,num1=&q;
sum = *num + *num1;
printf("The value of sum of this number is %d",sum);

}
