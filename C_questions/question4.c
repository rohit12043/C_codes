#include <stdio.h>

int main()
{
    unsigned i = 1;
    int j = -4;
    printf("%u \n", i + j);
    return 0;
}

/*
output? 4294967293 

why?
bcz unsigned's max value is 4294967295 and here we are subtracting -4 from 1

it becomes -3, 
find 2s complement of 3:
step 1: binary representation, 1's complement.
00000000 00000000 00000000 00000011

step 2: change 0s to 1 and 1s to 0
11111111 11111111 11111111 11111100

step 3: add 1 to the result to produce 2's complement.
11111111 11111111 11111111 11111101
(if it were 11111111 11111111 11111111 11111111, then we would say that it is 4294967295)

now we have one zero at the second place,
so it becomes 2^1 = 2.. so subtract 2 from max number..

we get 4294967295 - 2 = 42949672953
*/