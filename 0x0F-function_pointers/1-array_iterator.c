#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an integer
 *@array: the integer to print
 *@size: passed parameter
 *@action: passed function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
void (*ptr)(int);
unsigned int i;


if (size <= 0 || array == NULL || action == NULL)
return;

ptr = action;

for (i = 0; i < size; i++)
{
ptr(array[i]);
}
}
