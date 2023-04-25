#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'prints alphabets from a to z in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void) // prints alphabet from a to z
{
char i;

for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
}
