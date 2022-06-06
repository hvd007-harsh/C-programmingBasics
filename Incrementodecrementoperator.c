#include <stdio.h>

int main(void) {

/* ASSINGMENT OPERATOR
It increase the each value by one \\ Here is the some order of increment
postfix ++ \\INCREMENT
postfix -- \\DECREMENT
NOW THE SOME OF THE PREFIX OPERATOR
++Prefix \\INCREMENT
--Prefix \\DECREMENT
*/
float bill = 2000.0;
float tax = 100.0;


//bill = bill + tax;
bill ++;
printf("Total bill is: %.1f\n", bill);
bill --;

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
