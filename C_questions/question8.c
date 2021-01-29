#include <stdio.h>

static int i; // stored in the bss segment
static int i = 7; // transferred to the data segment.
static int i; 

/* 
you can declare multiple times but you can't initialise the variable again,
and the value of i would'nt change 
*/

int main()
{
static int i;
printf("%d \n", i);
return 0;
}

/*
output is zero because the variable inside the function will
get more preference than the others.

We need to understand the memory layout of C program.
different parts of code are stored in different sections.
A typical memory representation of C program consists of following sections.
1. Text segment - read-only section, contains machine code of the program.
2. Initialized data segment - all the uninitialized variables are stored in this data segment..
consists of global, extern, static (local, and global) 
and constant global variables. 
it's read-only (constant values) and read-write (global, extern, static)

3. Uninitialized data segment - BSS (Blocks started by symbol) segment,
all the uninitialized variables are stored in this data segment.
consists of uninitialised global, extern, static (local, and global) and constant global variables. 

4. Stack
5. Heap

size:
text    data     bss     dec     hex filename
1509     604      12    2125     84d question8

*/