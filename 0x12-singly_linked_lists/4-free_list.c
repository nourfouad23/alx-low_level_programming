#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - check the code
 *
 *@head: passed param
 *
 *
 * Return: return nothing.
 *
 */
void free_list(list_t *head)
{
list_t *freeNodes = head;

if (head == NULL)
return;

while (freeNodes != NULL)
{
freeNodes = head->next;
free(head);
head = freeNodes;
}
}
