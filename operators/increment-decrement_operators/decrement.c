#include <stdio.h>

int main()
{
    /* decrement works exactly like increment */
int a = 10, b, x = 10, y;
b = a--; // b = a, a = a - 1; b = 10, a = 10 - 1, a = 9;
printf("the value of b is %d \n", b);
printf("the value of a is %d \n", a);

y = --x; // y = (x = x - 1); y = (x = 10 - 1), y = x = 9;
printf("\nthe value of y is %d \n", y);
printf("the value of x is %d \n", x);
    return 0;
}
