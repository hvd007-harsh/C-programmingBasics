#include<stdio.h>


int main(){
int arr[2][3],sum=0;
for(int r=0;r<=2;r++){
 for (int c=0;c<=3;c++){
   scanf("%d",&arr[r][c]);
}}
for(int r=0;r<=2;r++){
        printf("\n");
 for (int c=0;c<=3;c++){
   printf("%d",arr[r][c]);
}}
for(int r=0;r<=2;r++){
 for (int c=0;c<=3;c++){
   sum=sum+arr[r][c];
}}
printf("Enter the array of two dimension is: %d",sum);
}
