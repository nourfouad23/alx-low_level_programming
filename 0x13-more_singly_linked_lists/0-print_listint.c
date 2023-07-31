#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_listint - check the code
 *
 *@h: passed param
 *
 * Return: return number of nodes.
 *
 */



size_t print_listint(const listint_t *h)
{
size_t Nodecount = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
Nodecount++;
}

return (Nodecount);
}