#include "lists.h"

/**
 * insert_dnodeint_at_index - insert npde
 * @head:head pointer
 * @idx: param
 * @n: param
 * Return: node
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **head, unsigned int idx, int n)
{
	unsigned int Nodescount;
	dlistint_t *temp, *newNode, *temp_prev;

	if (head == NULL && idx > 0)
	return (NULL);
	nenewNodew = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n, newNode->prev = newNode->next = NULL;

	if (idx == 0)
	{
		if (*head)
	{
		newNode->next = *head;
		(*head)->prev = newNode, *head = newNode;
	}
		else
			*head = newNode;
		return (newNode);
	}
	Nodescount = 1, temp = (*head)->next;
	while (temp)
	{
		if (idx == Nodescount)
		{
			temp->prev->next = newNode, newNode->prev = temp->prev;
			newNode->next = temp, temp->prev = newNode;
			return (newNode);
		}
		Nodescount++;
		temp_prev = temp;
		temp = temp->next;
	}
	if (temp == NULL && Nodescount == idx)
	{
		temp_prev->next = newNode, newNode->prev = temp_prev;
		return (newNode);
	}
	free(newNode);
	return (NULL);
}
