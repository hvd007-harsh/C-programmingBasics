#include <stdio.h>

int main(void) {

/* ASSINGMENT OPERATOR
EQUAL =
INCREMENT THEN ASSIGN +=
DECREMENT THEN ASSIGN -=
MULTIPLY THEN ASSIGN *=
DIVIDE THEN ASSIGN /=
MODULE THEN ASSIGN %=
ASSOCIATIVE: RIGHT TO LEFT
*/
float bill = 2000.0;
float tax = 100.0;


//bill = bill + tax;
bill += tax;
printf("Total bill is: %.1f\n", bill);
bill -= tax;
printf("Total bill is: %.1f\n", bill);
bill *= tax;
printf("Total bill is: %.1f\n", bill);
bill /= tax;
printf("Total bill is: %.1f\n", bill);

// Example 2
int number = 10;
int x = 3;

number = number * x;
printf("Multiplication result: %d", number);
    return 0;
}

