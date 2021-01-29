#include <stdio.h>
#include "value.c" // we use "" and tell the computer to first search for the file in the same directory.
int main()
{
    /* code */
    extern int a;
    printf("%d \n", a);
    return 0;
}
/* 
extern symbol expands to external, by using the extern symbol you can declare a variable,
and the compiler won't allocate memory for that function.
it simply says, "Yo Compiler, so don't define the variable and
don't allocate any memory to this variable, it's value is somewhere in this project or code,
take it from there." perks: save memory
*/

/*
the opposite of this is auto keyword, it expands to automatic,
the value defined using auto keyword is destroyed after the completion of that particular function
or code, it is the default storage class.
*/

/* Glossary
Storage Classes are used to describe the features of a variable/function.
These features basically include the scope,
visibility and life-time which help us to trace the existence of a particular variable
during the runtime of a program.
*/

/*
when an extern variable is initialized,
it is considered as a definition and the compiler allocates memory to it.
*/
