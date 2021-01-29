#include <stdio.h>

/* concept of l-value and r-value,
l-value = an object which has some identifiable location and can hold some data.
l-value may appear as either left hand or right hand side of an assignment operator(=).
l-value often represents as identifier. l-value must be a variable.

r-value = an object which has no indentifiable location and is usually a function or expression,
and is capable of returning a constant expression or value.
r-value can appear on right but not on left hand side of an assignment operator(=). */

int main()
{
int a = 10, b;
int x = 10, y;

// a++ is same as a = a +1;
/* (a + b)++ is wrong as it means (a + b) = (a + b) +1,
but we know that there can't be any expression or function before the assignment operator..
so it throws an error. xD filled half code with comments. */

/* Increment and Decrement are unary operators as they are applied on single operand. */
// a++;
// printf("%d \n", a); output is 1.

// ++a;
// printf("%d \n", a); again the output is 1.

/* so what's the difference b/w these to operators? first is pre-increment and 2nd is post-decrement.
pre - increment the value first and then assign it to the variable, 
post - assign it to a variable and then increment the value. */

b = a++; // b = a, a = a + 1; b = 10, a = 10 + 1, a = 11;
printf("b = %d \n", b);
printf("a = %d \n", a);
//b = a++, (b = a) and then (a = a + 1).. that converts to (b = 10) (a = 10 + 1 = 11)


// let's do the same thing, but with pre-increment.
y = ++x; // y = (x = x + 1); y = (x = 10 + 1), y = x = 11;
printf("\ny = %d \n", y);
printf("x = %d \n", x);

/* the result is different this time even tho the values were exactly the same.
y = ++x, y = (x = x + 1).. that converts to y = (x = 10 + 1 = 11) */

return 0;
}
