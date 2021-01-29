
/* 
int count; suppose if you would've used this approach instead, defined the variable as global
it would retain the value of count and change it according to our code.
*/


increment() // local variables in a function get destroyed after the completion of that function.
{
static int count;
count = count + 1;
return count;
}

/* 
we have used the static keyword to limit the use of this variable only to this function and also to retain the value of "count" variable,
and we can't assign a variable to the static variable, we can only assign a constant value.
static variable will act like a global variable if defined outside the function, but will only be limited to this file.
 */