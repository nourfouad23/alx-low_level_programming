#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * new_dog - Program that creates a new dog. That is, creates a new struct
 * @name: Stores the name char array
 * @age: Stores the age float
 * @owner: Stores the owner char array
 * Return: Pointer to the newly created struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog = NULL;
	char *newName, *newOwner;
	int newNameLen, newOwnerLen;

	if (name == NULL || owner == NULL)
		return (NULL);

	newDog = malloc(sizeof(dog_t));

	if (newDog == NULL)
		return (NULL);

	newNameLen = strlen(name);
	newName = malloc(sizeof(char *) * (newNameLen + 1));

	if (newName == NULL)
	{
		free(newDog);
		return (NULL);
	}

	newOwnerLen = strlen(owner);
	newOwner = malloc(sizeof(char *) * (newOwnerLen + 1));

	if (newOwner == NULL)
	{
		free(newName);
		free(newDog);
		return (NULL);
	}

	newDog->name = strcpy(newName, name);
	newDog->age = age;
	newDog->owner = strcpy(newOwner, owner);

	return (newDog);
}
