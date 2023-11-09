#include "lists.h"

/**
 * add_dnodeint - adds new node
 * @head: head pointer
 * @n: param
 * Return: new node
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	*head = new;
	return (new);
}
