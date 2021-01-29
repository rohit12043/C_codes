#include <stdio.h>

int main()
{

int a = 7, b = 5;

printf("%d \n", a + ++b);

return 0;
}
/*
a + ++b;
| a | + | ++ | b | ; |
a + (++b)
a + (b = 5 + 1 = 6)
a + b
7 + 6 = 13
*/