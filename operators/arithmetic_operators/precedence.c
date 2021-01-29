#include <stdio.h>

int main()
{
/* precedence and associativity of the operators.
  *, /, % have the highest precedence and then +, - have lowest precedence.. 
  that means first the operations with higher precedence will be evaluated and then the others.
  and then comes associativity, associativity is from left to right, 
  means operator on the left of the above list will be evaluated first. */
    double num1, num2;
    printf("Enter number 1:\n");
    scanf("%lf", &num1);  // value of operands.
    printf("Enter number 2:\n");
    scanf("%lf", &num2);  // value of operands.

    printf("\n****Some examples of Precedence and Associativity**** \n");
    printf ("%.2lf / %.2lf + 1 is %.2lf \n", num1, num2, num1/num2 + 1);
    printf ("%.2lf * %.2lf and / 2 is %.2lf \n", num1, num2, num1 * num2 / 2);
    printf ("%.2lf + %.2lf - %.2lf * 2 is %.2lf (%.2lf - %.2lf = %.2lf) \n", num1, num2, num1, num1 + num2 - num1 * 2, num1 + num2, num1 * 2, num1 + num2 - num1 * 2); // 15 - 20 = -5.
    return 0;
}


