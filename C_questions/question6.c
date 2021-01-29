#include <stdio.h>

int main()
{
#define B "%s \n"
#define A "Hello World"  

    /* code */
printf(B, A); 
/* 
it basically replaces A and B's value and the code looks like this, 
printf("%s \n", "Hello World") and prints Hello World
*/
    return 0;
}
