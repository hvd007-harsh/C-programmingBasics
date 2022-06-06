#include<stdio.h>
int fibonacci(int);
int main(){
int fibon,n;
printf("Enter the times you want to get fibonacci of n:");
scanf("%d",&n);
fibon = fibonacci(n);
printf("Fibonnaci: %d \n",fibon);
return 0 ;
}
int fibonacci(int fib){
    int num1;
if (fib==1||fib==0){
num1 = fib;
return num1;
}else{
num1=fibonacci(fib-2)+fibonacci(fib-1);
return num1;
}

}
