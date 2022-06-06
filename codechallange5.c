#include<stdio.h>

float largestnumber(float*);
int main(){
 float arr[5]= {983, 2.9,1000.567, 34, 433 };
 float *p= arr;
 float largest=largestnumber(p);
 printf("The largest number will be %.2f",largest);
  return 0;
}
float largestnumber(float *p){
    float num= *p;
for(int i=0;i<=5;i++){
  if(*p > num){
  num = *(p);
  }
  p++;
}
return num;
}
