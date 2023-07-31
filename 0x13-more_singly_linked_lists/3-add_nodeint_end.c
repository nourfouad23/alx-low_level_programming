#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code
 *
 *@head: passed param
 *@n: passed param
 *
 * Return: return number of elements.
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newNode, *temp;

newNode = malloc(sizeof(listint_t));

if (newNode == NULL)
return (NULL);

newNode->n = n;
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}

temp = *head;
while (temp->next != NULL)
temp = temp->next;

temp->next = newNode;

return (newNode);
}
