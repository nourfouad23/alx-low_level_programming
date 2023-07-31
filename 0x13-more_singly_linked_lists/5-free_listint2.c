#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code
 *
 *@head: passed param
 *
 *
 * Return: return nothing.
 *
 */

void free_listint2(listint_t **head)
{
listint_t *current_list;

if (head == NULL)
return;

while (*head != NULL)
{
current_list = *head;
*head = (*head)->next;
free(current_list);
}

*head = NULL;
}
