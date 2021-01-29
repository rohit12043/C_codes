#include <stdio.h>

int main()
{
    /* Output of the foll code */
    char c = 255; // the max value a char can hold is 255.
    c = c + 10; // here we are exceeding the max value, 255 + 10 = 265, so it become 265 % 2^8 (i.e 265 % 255 = 9)

    printf("%d \n", c);
    return 0;
}
/* if we exceed the valid range of the data type, we'll end up at the starting of it

for ex: valid range for int is from -2147483648 to 2147483647
if you do:

int a = -2147483649; // -2147483649 is more than  -2147483648
printf("%d", a);

it'll print 2147483647. */
