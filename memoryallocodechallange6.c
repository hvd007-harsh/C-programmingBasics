#include<stdio.h>
#include<stdlib.h>
/*
Write a program to input ‘n’ numbers and then find out their sum.

Use malloc() function to dynamically allocate memory as per the value of ‘n’.
Consider using ‘float’, since the user input could be a floating-point decimal value.
*/
int main(){
int size ;
float sum=0;
float *ptr;

puts("Enter the number for memory allocation:");
scanf("%d",&size);
ptr = (int*)malloc(size * sizeof(int));
for(int i=0; i<size;i++)
{
    scanf("%f",&ptr[i]);
}
for(int i=0; i<=size; i++){
       sum = sum + ptr[i];
}

printf("The value of sum of array is %f",sum);
return 0;

}
