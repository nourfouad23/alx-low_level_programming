#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - check the code
 *
 *@h: passed param
 *
 * Return: return number of elements.
 *
 */

size_t listint_len(const listint_t *h)
{
size_t len = 0;

const listint_t *currentNode = h;

while (currentNode)
{
len++;
currentNode = currentNode->next;
}
return (len);
}
