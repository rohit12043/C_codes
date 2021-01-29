#include <stdio.h>

int main() {
    double num_1, num_2;
    char choice;

    printf("CHOOSE THE OPERATION: (1. +,  2. -,  3. *,  4. /) \n");
    scanf("%c", &choice); // asks for the operator.
 
    if (choice == '+' || choice == '-' || choice == '*' || choice == '/') {
        printf("Enter number 1:\n");
        scanf("%lf", &num_1);  // value of operands.
        printf("Enter number 2:\n");
        scanf("%lf", &num_2);  // value of operands.
    }
    else
    {
        printf("Invalid input. \n");
    }

    if (choice == '+') {
        printf("The result is: %.2lf \n", num_1 + num_2); // add
    }
    else if (choice == '-') {
        printf("The result is: %.2lf \n", num_1 - num_2); // subtract
    }
    else if (choice == '*') {
        printf("The result is: %.2lf \n", num_1 * num_2); // multiply
    }
    else if (choice == '/') {
        printf("The result is: %.2lf \n", num_1 / num_2); // divide
    }
    return 0;
}