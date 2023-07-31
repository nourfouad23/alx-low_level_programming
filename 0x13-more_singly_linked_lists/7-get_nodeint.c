#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - check the code
 *
 *@head: passed param
 *@index: passed param
 *
 * Return: return list.
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int count = 0;
listint_t *current_node = head;

while (current_node != NULL)
{
if (count == index)
{
return (current_node);
}

current_node = current_node->next;
count++;
}

return (NULL);
}
