#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - check the code
 *
 *@head: passed param
 *@index: passed param
 *
 * Return: return nothing.
 *
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current_node, *prev_node;
unsigned int i;

if (*head == NULL)
return (-1);

current_node = *head;
prev_node = NULL;

for (i = 0; current_node != NULL && i < index; i++)
{
prev_node = current_node;
current_node = current_node->next;
}

if (current_node == NULL)
return (-1);

if (prev_node == NULL)
*head = current_node->next;
else
prev_node->next = current_node->next;

free(current_node);

return (1);
}
