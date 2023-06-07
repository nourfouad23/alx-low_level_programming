#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - check the code
 *
 *@h: passed param
 *
 *
 * Return: return nothing.
 *
 */

list_size_t free_listint_safe(listint_t **h)
{
list_size_t list_size = 0;
listint_t *current_node, *prev_node;

if (h == NULL || *h == NULL)
return (0);

current_node = *h;
*h = NULL;

while (current_node != NULL)
{
list_size++;
prev_node = current_node;
current_node = current_node->next;
free(prev_node);
if (prev_node <= current_node)
break;
}

return (list_size);
}
