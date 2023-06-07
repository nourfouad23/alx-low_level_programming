#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - check the code
 *
 *@head: passed param
 *
 *
 * Return: return reverse.
 *
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *prev_node = NULL;
listint_t *next_node = NULL;

while (*head != NULL)
{
next_node = (*head)->next;
(*head)->next = prev_node;
prev_node = *head;
*head = next_node;
}

*head = prev_node;
return (*head);
}
