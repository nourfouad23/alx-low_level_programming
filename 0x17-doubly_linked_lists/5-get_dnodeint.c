#include "lists.h"

/**
 * get_dnodeint_at_index - gets index of node
 * @head: head pointer
 * @index: param
 * Return: node
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int Listsize;
	dlistint_t *temp;

	Listsize = 0;
	if (head == NULL)
	return (NULL);

	temp = head;
	while (temp)
	{
	if (index == Listsize)
	return (temp);
	Listsize++;
	temp = temp->next;
	}
	return (NULL);
}
