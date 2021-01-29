#include <stdio.h>

int main()
{
int a = 10, b = 3;
printf("%d", a+++++b);
return 0;
}

/*
a+++++b;
| a | ++ | + | ++ | b | ; |
a++ + ++b;

a + (b = b + 1); a = a + 1;
10 + (b = 3 + 1 = 4); a = 10 + 1;
10 + 3 = 14; a = 11

Wrong approach ^

Correct approach
a+++++b
a++ ++ +b
(a + 1)++ +b
((a + 1) + 1) + b
we'll get lvalue error, as (a + 1) is an expression and can't hold value.
thus, "error: lvalue required as increment operand; printf("%d", a+++++b);"
*/