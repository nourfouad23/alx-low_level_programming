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

while (h != NULL) {
printf("%d ", h->len);
h = h->next;
count++;
}

printf("\n");

return (count);
}
