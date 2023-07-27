#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code
 *
 *@head: passed param
 *@str: passeed param
 *
 * Return: return number of elements.
 *
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newNode = malloc(sizeof(list_t));
list_t *last_node = *head;

if (newNode == NULL)
return (NULL);

newNode->str = strdup(str);
newNode->len = strlen(str);
newNode->next = NULL;

if (*head == NULL)
{
*head = newNode;
return (newNode);
}

while (last_node->next != NULL)
last_node = last_node->next;

last_node->next = newNode;
return (newNode);
}