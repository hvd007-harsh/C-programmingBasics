#include <stdio.h>


int main(){
int i = 1;
while(i++<=5){
    printf("%d\n",i++);
}
harsh();
return 0;
}
void harsh(){
 int j,arr[3];
puts("Enter the array values:");
for(int i=0 ; i < 3; i++ ){
    scanf("%d",&arr[i]);
}
puts("Enter the number of element you want to scan");
scanf("%d",&j);
printf("%d",arr[j]);
}
