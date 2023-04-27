#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - function to check, print and return
 *
 */

void print_most_numbers(void)
{
int num;

for (num = 0; num < 10; num++)
{
if (num != 0 && num != 2)
{
printf("%d", num);
}
}
printf("\n");
}
