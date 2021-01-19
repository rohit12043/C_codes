#include <stdio.h>
#include <math.h>

  // welcome, surely check my retarded code :D, still learning, there might be some mistakes/ bad practices here and there..
  int main() {

    // defining the variables
    long int p;
    long int number;
    long int count;

    // asking for user input
    printf("Give number whose exponent table you want: ");
    scanf("%ld", &number);

    printf("till how much count you want the table? ");
    scanf("%ld", &count);

    printf("\n n    number exponent table     ");

    // the main loop
    for (int n = 0; n <= count; n++) {
      if (n == 0)
      {
       p = 0; 
      }
      else
      {
      p = pow(number, n); // raise the number to the power n.
      printf("\n%2d   %8ld   ", n, p);
      }
     
    }
    printf("\n");
    return 0;
  }