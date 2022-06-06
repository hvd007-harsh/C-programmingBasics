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


printf("Enter the grade of the student:");
scanf("%d",&retailPrice);
if(retailPrice>=450 && retailPrice<500){
    printf("You got 'A++' grade\n");
}
else if(retailPrice>=400 && retailPrice<450){
    printf("You get 'A' grade\n");
}
else if(retailPrice>=350 && retailPrice<400){
    printf("You get 'B' grade\n");
}
else if(retailPrice>=250 && retailPrice<350){
    printf("You get 'C' grade\n");
}
else if(retailPrice>=150 && retailPrice<250){
    printf("You get 'D' grade\n");
}
else if(retailPrice<150){
    printf("You get fail try again and don't worry you are in another work perfect\n");
}


return 0;
}

