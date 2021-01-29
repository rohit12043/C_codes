#include <stdio.h>

int main()
{
    /* output of the following program */
    printf("%s", "Hello\n");
    printf("%10s", "Hello"); 
    /* it prints 5 whitespace before "Hello" because as a full, 
    it prints a string 10 characters wide as we have specified "%10s". */
    return 0;
}
