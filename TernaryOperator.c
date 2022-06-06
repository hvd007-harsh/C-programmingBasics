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
//char str[50];
float PayableAmount;
char key;


printf("Enter the amount of your product:");
scanf("%d",&retailPrice);
PayableAmount = retailPrice >= 50 ? retailPrice * 0.9 : retailPrice ;
retailPrice >= 50 ? printf("You got discount woo hoo!!\n") : printf("I am sorry you didn't got discount\n");
printf(" the amount of your product: %f",PayableAmount);

return 0;
}
