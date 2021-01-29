#include <stdio.h>

int main()
{
    int a = 6, b = 10;
    printf("%d \n", a+++b);
    return 0;
}
    
/*
Lexial analysis (scanner) is the first phase of a compiler. 
It takes the modified source code from language preprocessors that are written in the form of sentences. 
The lexical analyzer breaks these syntaxes into a series of tokens,
by removing any whitespace or comments in the source code.

TL;DR
Lexial analyser scans the whole programs and find a meaningful sequence of characters called lexemes, 
it then converts the lexemes into a token.
You can think of token as a container which contains the meaningful character sequence.
for example:
int is a meaningful sequence of character, 
then lexical analyser maps int into a token. int -> <keyword, int>
It always matches the longest character sequence.

EXAMPLE:
int a = 7;

so the lexical analyser goes through this code and converts meaningful character into token.
| int | a | = | 7 | ; |
and here a is a valid lexeme as the compiler knows that it is after the int keyword, 
and assumes that A is a valid identifier or a variable.
*/

/*
Alright now let's solve our problem
a+++b;
| a | ++ | + | b | ; |
the compiler understand that a++ is the unary operation

so the program becomes,
a++ + b;
a + b; a = a + 1;
6 + 10 = 16; a = 6 + 1 = 7; 
value is incremented after the completion of equation as 
it is a post-increment.
*/