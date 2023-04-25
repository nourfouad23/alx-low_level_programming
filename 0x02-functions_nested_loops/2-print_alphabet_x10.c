#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet ten times from a to z
 */

void print_alphabet_x10(void)
{
int i;
char letter;

for (i = 0; i <= 10; i++)
{
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
}
putchar('\n');
}
