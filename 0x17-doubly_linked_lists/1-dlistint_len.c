#include "lists.h"

/**
 * dlistint_len - returns number of elements.
 * @h: head pointer
 * Return: number of nodes
 **/

size_t dlistint_len(const dlistint_t *h)
{
	size_t list_size;

	list_size = 0;
	if (h == NULL)
	return (list_size);

	while (h)
	{
	list_size++;
	h = h->next;
	}
	return (list_size);
}