#include <stdio.h>

int main()
{
    /* code */
    int var = 052;
    printf("%d", var);
/* 
the output of the code is 42, as the compiler assumes that the value is any octal value.
the value is considered as an octal value when we put 0 infront of it and we have specified
the decimal identifier, so it converts octal value into decimal value.
so it goes like this

8^1 8^0
5    2
8*5 + 0*2 = 42.

for printing the octal value we can use the "%o" identifier and it'll print 52.
*/

    return 0;
}
