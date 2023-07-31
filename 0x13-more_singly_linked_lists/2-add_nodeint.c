#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - check the code
 *
 *@head: passed param
 *@n: passed param
 *
 * Return: return number of elements.
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode = malloc(sizeof(listint_t));
if (!newNode)
{
return (NULL);
}
newNode->n = n;
newNode->next = *head;

*head = newNode;
return (newNode);
}
