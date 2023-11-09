#include "lists.h"

/**
 * delete_dnodeint_at_index - delete node
 * @head: head pointer
 * @index: param
 * Return: 1 or -1
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int Nodescount;
	dlistint_t *temp;

	if (*head == NULL || head == NULL)
	return (-1);
	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp), temp = NULL;
		return (1);
	}
	Nodescount = 1, temp = (*head)->next;
	if (temp)
	{
		while (temp->next)
		{
			if (index == Nodescount)
			{
				temp->prev->next = temp->next;
				temp->next->prev = temp->prev;
				free(temp), temp = NULL;
				return (1);
			}
			Nodescount++, temp = temp->next;
		}
	}
	if (temp && index == Nodescount)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}
	return (-1);
}
