#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - check the code
 *
 *@h: passed param
 *
 * Return: return number of elements.
 *
 */

size_t list_len(const list_t *h)
{
int count = 0;

while (h != NULL)
{
h = h->next;
count++;
}

return (count);
}