#include "main.h"
#include <stdio.h>
#include<string.h>

/**
 * _strlen - check the code
 *
 *@s: passed parameter
 *
 *Return: returns value
 *
 */


int _strlen(char *s)
{
int count = 0;
int i;

for (i = 0; *s != '\0'; ++i)
count++;

return count;
}
