#include <stdio.h>

int main()
{
    register int a;
    printf("%d \n", a);
    return 0;
}

/*
register keyword tells the compiler to store the value of variable in register memory,
and register memory is very fast,
you can retrieve data quickly but it can only hold less content.

Ps: you can use register keyword for the variables which you are gonna use very frequently..
but.. it's upto the compiler if it wants to save the variable's value in register memory or not.

usually compiler does all the necessary optimizations.
*/