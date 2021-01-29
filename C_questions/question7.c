#include <stdio.h>

int main()
{
int var = 0x43FF;
printf("%x \n", var);
/*
it prints 43ff, but if you want to print 43FF, then you can just use capital "%X" as identifier. 
*/

// What if this time you wanna print hexadecimal value as a decimal value.
int var1 = 0x22FF;
printf("%d", var1);
return 0;
}

