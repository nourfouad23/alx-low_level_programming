#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code
 *
 *@head: passed param
 *
 *
 * Return: return number.
 *
 */

int pop_listint(listint_t **head)
{
int data;
listint_t *temp_list;

if (*head == NULL)
return (0);

temp_list = *head;
*head = (*head)->next;
data = temp_list->n;
free(temp_list);

return (data);
}
