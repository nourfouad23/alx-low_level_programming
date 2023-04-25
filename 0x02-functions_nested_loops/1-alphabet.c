#include <stdio.h>
#include "main.h"


/*print_alphabet: prints alphabet from a to z in lowercase*/
void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
