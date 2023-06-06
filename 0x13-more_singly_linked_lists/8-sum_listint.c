#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - check the code
 *
 *@head: passed param
 *
 *
 * Return: return sum.
 *
 */

int sum_listint(listint_t *head)
{
int sum_list = 0;

while (head != NULL)
{
sum_list += head->n;
head = head->next;
}

return (sum_list);
}
