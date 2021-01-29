#include <stdio.h>
// scanf function is used to take input from user, it can accept string, character, int and other datatypes
int main()
{
int val;
int val1;
printf("Enter the value of first integer: \n");
scanf("%d", &val); 
printf("Enter the value of second integer: \n");
scanf("%d", &val1); 

int result = val + val1;
printf("%d + %d = %d \n", val, val1, result);
return 0;
}
// it asks the user for input, and then we use the ampersand sign followed by the variable name to store value as it provides the memory location of the variable.
// "&" is an address-of operator, that means &val is equivalent to address of val.
