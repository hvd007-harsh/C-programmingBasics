#include <stdio.h>
#include <unistd.h>
/*write a program to print: “as economic reforms picked up the pace, india's gdp grew five-fold to reach us$2.2 trillion in 2015 (as per imf estimates).”

you need to define separate variables for ‘india’, ‘$’, ‘2.2’, and ‘2015’.
use appropriate data types for each literal and accordingly print the statement using corresponding format specifiers.
*/
int main(void){
char country[5];
char dollar = '$';
float money = 2.2;
int year = 2015;
scanf("%[^\n]*c",country);
usleep(1000000);
printf("Please wait....");
usleep(1000000);
printf("Please wait....");
printf("as economic reforms picked up the pace, %s 's gdp grew five-fold to reach us %c %.4f trillion in %d (as per imf estimates):",country,dollar,money,year);
return 0;
}
