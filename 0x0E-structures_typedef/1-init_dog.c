#include <stdio.h>
#include "dog.h"

/**
 * init_dog - check the code
 *@d: passed param
 *@name: passed param
 *@age: passed param
 *@owner: passed param
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
	return(1);

d -> name = name;
d -> age = age;
d -> owner = owner;
}
