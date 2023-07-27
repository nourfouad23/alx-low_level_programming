#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - check the code
 *@h: passed param
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
int count = 0;

while (h != NULL)
{
if (h->str == NULL)
printf("[0] (nil)\n");


printf("[%d] %s\n", h->len, h->str);
h = h->next;
count++;
}


return (count);
}