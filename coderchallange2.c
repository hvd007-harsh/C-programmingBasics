#include<stdio.h>

int main(){
    int location;
//int n,m = 0 ;
//printf("Enter the number of n series you want to enter \n");
//scanf("%d",&n);
//for(int i = 1 ; i <= n;i++){
//   m = m+(i*i);
//}
//printf("The total value of %d ", m);
location = codechallange();
       printf("The greatest value is:%d",location);
return 0;
}
int codechallange(){
   int i=0,location=0,num[10];

    while(i<10){
    scanf("%d",&num[i]);
        if(num[i]>location){
        location = num[i];
   }
     i++;
    }
 return location;
}

