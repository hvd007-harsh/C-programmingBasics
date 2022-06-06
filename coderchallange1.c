
/*
restaurant gives a discount of 10%
the total customer bill = 5% tax is greater than or equal to Rs. 1000.


*/
#include <stdio.h>


int main(){
int amount;
printf("Enter the amount of product to check for 10 percent discount \n");
scanf("%d",&amount);
amount = amount + (amount/20);
if(amount>=1000 ){
        amount = amount -(amount/10);
printf("YOU GOT 10 percent DISCOUNT \n NOW YOUR NEW PRICE : %d",amount);
}else{
printf("SHOP NEXT TIME HAVE A NICE DAY\n YOUR PRICE : %d",amount);
}
}

