#include <stdio.h>


int main()
{
int d, f=1;
long double factorial =1;
puts("Enter the Factorial Number\n");
scanf("%d",&d);
while(f<=d){
    factorial=f*factorial;
    f++;
}
printf("The factorial number of given: %ld \n",factorial);
return 0;
}
