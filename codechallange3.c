#include<stdio.h>

float Perimeter(float,float);
int main(){
float l,b,Peri;
printf("\tHI welcome to know parameter centre\n");
printf("\tPlease enter length and breath one by one\n");
scanf("%f",&l);
scanf("%f",&b);
Peri = Perimeter(l,b);
printf("The entered perimeter is %f",Peri);
return 0;
}
float Perimeter(float num1,float num2){

return num1*num2;
}
