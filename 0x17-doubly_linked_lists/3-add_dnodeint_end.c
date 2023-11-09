#include "lists.h"

/**
 * add_dnodeint_end - adds an end node.
 * @head: head pointer
 * @n: param
 * Return: node
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newNode, *temp;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
	return (NULL);
	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = NULL;

	if (*head == NULL)
	{
	*head = newNode;
	return (newNode);
	}
	if ((*head)->next == NULL)
	{
	(*head)->next = newNode;
	newNode->prev = *head;
	return (newNode);
	}
	temp = *head;
	while (temp->next)
	temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
	return (newNode);
}
