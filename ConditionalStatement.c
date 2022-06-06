#include <stdio.h>
// Conditional Statement
//IF-ELSE
//TERNARY OPERATOR{ Ternaty operator is similar to if-else statetment condition? exp1 : exp2 ; if condition
// is true then it will execute exp1 otherwise exp2}
//ELSE-IF LADDER
//SWITCH STATEMENT
//'break' KEYWORD
int main(){

int retailPrice;
float PayableAmount;
char key;
do{
printf("Enter the amount of your product:");
scanf("%d",&retailPrice);
if(retailPrice >= 50){
    puts("Surprise! You get a discount of 10%");
    PayableAmount = retailPrice* 0.9;
} else {
    puts("Sorry your amount is less than 50 so no discount");
    PayableAmount = retailPrice;
}
printf("IF YOU WANT TO INCREASE PRICE TRY AGAIN PRESS Y or y");
scanf("%c",&key);
    }while( key == 'Y'||'y');



       puts("Enter the amount of your product:");
scanf("%d",&retailPrice);
return 0;
}
