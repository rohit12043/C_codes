#include <stdio.h>
#include "increment-value.c"

int main ()
{
    int val;
    for (int i = 1; i <=3; i++)
    {
    val = increment();
    }

    printf( "%d \n", val);

}

/* geeksforgeeks explanation, cuzwhynot
Static variables have a property of preserving their value even after they are out of their scope!
Hence, static variables preserve the value of their last use in their scope.
So we can say that they are initialized only once and exist till the termination of the program.
static says to the compiler, "Don't destroy my variable until the end of the program, and also preserve the value."
*/