#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - check the code
 *
 *@head: passed param
 *@str: passeed param
 *
 * Return: return number of elements.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newNode;

newNode = malloc(sizeof(list_t));

if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);
newNode->len = strlen(str);

if (*head == NULL)
{
*head = newNode;

return (*head);
}
newNode->next = *head;
*head = newNode;

return (*head);
}
