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
if(retailPrice>=100 && retailPrice<500){
    printf("You got 5 discount\n");
}
else if(retailPrice>=500 && retailPrice<750){
    printf("You got 10 discount\n");
}
else if(retailPrice>=750 && retailPrice<1000){
    printf("You got 15 discount\n");
}
else if(retailPrice>=1000){
    printf("You got 20 discount\n");
}
else{
    printf("You got no discount We are sorry\n");
}


return 0;
}

