#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - copy func
 *@f: passed param
 *@name: passed param
 * Return: return nothing.
 */


void print_name(char *name, void (*f)(char *))
{
void (* ptr)(char *);

if (name == NULL || f == NULL)
return;


ptr = f;
ptr(name);
}
