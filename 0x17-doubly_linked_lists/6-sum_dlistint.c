#include "lists.h"

/**
 * sum_dlistint - gets the sum
 * @head: head pointer
 * Return: sum
 **/

int sum_dlistint(dlistint_t *head)
{
	long int Nodesum;
	dlistint_t *temp;

	Nodesum = 0;
	if (head == NULL)
	return (Nodesum);

	temp = head;
	while (temp)
	{
	Nodesum += temp->n;
	temp = temp->next;
	}
	return (Nodesum);
}
