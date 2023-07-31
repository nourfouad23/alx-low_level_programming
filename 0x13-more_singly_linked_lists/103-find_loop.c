#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - check the code
 *
 *@head: passed param
 *
 *
 * Return: return nothing.
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *value, *currentValue;

if (!head)
return (NULL);

value = currentValue = head;

while (value && currentValue && currentValue->next)
{
value = value->next;
currentValue = currentValue->next->next;

if (value == currentValue)
{
value = head;

while (value && currentValue)
{
if (value == currentValue)
return (value);

value = value->next;
currentValue = currentValue->next;
}
}
}

return (NULL);
}
