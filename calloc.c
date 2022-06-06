
#include<stdio.h>


int main(){
int size ;
float *ptr , sum=0;

puts("Enter the number for memory allocation:");
scanf("%d",&size);
ptr = (int*)calloc(size , sizeof(int));
for(int i=0; i<size;i++)
{
    scanf("%f",&ptr[i]);
}
for(int i=0; i<size; i++){
       sum = sum + ptr[i];
}
printf("The value of sum of array is %f",sum);
return 0;
}
