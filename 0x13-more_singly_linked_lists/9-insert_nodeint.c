#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - check the code
 *
 *@head: passed param
 *@idx: passed param
 *@n: passed param
 *
 * Return: return list.
 *
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i = 0;
listint_t *newNode, *temp_list;

if (head == NULL)
return (NULL);

newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

newNode->n = n;

if (idx == 0)
{
newNode->next = *head;
*head = newNode;
return (newNode);
}

temp_list = *head;

while (temp_list != NULL && i < idx - 1)
{
temp_list = temp_list->next;
i++;
}

if (temp_list == NULL)
{
free(newNode);
}
return (newNode);
}
