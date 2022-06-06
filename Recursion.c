#include<stdio.h>

int main(){

int d ,s;
printf("Enter the two number\n");
scanf("%d",&d);
scanf("%d",&s);
compare(d,s);

}
int compare(int num1,int num2){
if(num1>=num2){
printf("The greatest number is:%d",num1);
}else{
printf("The greatest number is:%d",num2);
}
compare(num1,num2);
return 0;
}
