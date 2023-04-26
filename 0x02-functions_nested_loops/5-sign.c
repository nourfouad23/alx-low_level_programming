#include <stdio.h>
#include "main.h"

/**
 * print_sign - function to check, print and return
 *
 * @n: Number to pass to function
 *
 * Return: returns 1 or 0 or -1
 */


int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n < 0)
{
printf("-");
return (-1);
}
else
{
printf("0");
return (0);
}
}
