#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_listint_safe - check the code
 *
 *@head: passed param
 *
 *
 * Return: return list.
 *
 */

size_t print_listint_safe(const listint_t *head)
{
const listint_t *point = head, *prev = NULL;
size_t nodes_count = 0;

if (head == NULL)
exit(98);

while (point != NULL)
{
printf("[%p] %d\n", (void *) point, point->n);
nodes_count++;

if (point < prev)
break;

prev = point;
point = point->next;
}

if (point != NULL)
{
printf("-> [%p] %d\n", (void *) point, point->n);
nodes_count++;
}

return (nodes_count);
}
