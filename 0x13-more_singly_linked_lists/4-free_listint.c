#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - check the code
 *
 *@head: passed param
 *
 *
 * Return: return nothing.
 *
 */

void free_listint(listint_t *head)
{
listint_t *temp_list;

while (head != NULL)
{
temp_list = head;
head = head->next;
free(temp_list);
}
}
