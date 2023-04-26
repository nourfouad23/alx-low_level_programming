#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - function to check, print and return
 *
 * @n: Number to pass to function
 *
 * Return: returns 1 or 0 or -1
 */


int print_last_digit(int n)
{
if (n < 0)
{
_putchar('0' + 10 - (n % 10));
return (10 - (n % 10));
}
else
{
_putchar('0' + n % 10);
return (n % 10);
}
}
