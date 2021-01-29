#include <stdio.h>
double num; 
int count;
int main()
{
    printf("======= MULTIPLICATION TABLE ======= \n");
    printf("Enter the number whose multiplication table you want: ");
    scanf("%lf", &num); // specify the format of the input.
    printf("till which count you want the table: ");
    scanf("%d", &count);

    for (int i = 1; i <= count; i++) { // it loops until i's value becomes either less than or equal to the count.
        printf("%4.2lf * %d = %4.2lf \n", num, i, num * i); // prints the value till 2 decimal places after "."
    }
    return 0;
}
