#include <stdio.h>
#include "dog.h"


/**
 * free_dog - initialize function for struct dog
 * @d: pointer to dog struct
 * 
 * Return: return pointer to struct
 */

void free_dog(dog_t *d)
{
if (d == NULL)
	return;

free(d->name);
free(d->age);
free(d->owner);
}
