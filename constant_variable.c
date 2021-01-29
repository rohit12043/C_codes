#include <stdio.h>

// we're gonna define a constant variable, constant variable can't be changed after defining once, they become read-only.
int main()
{
const int val = 10;
val = 5; 
/* it'll produce an error, "error: assignment of read-only variable ‘val’"
as we can't change the value of constant as it is now a read-only variable.
*/
printf("%d", val);
}
