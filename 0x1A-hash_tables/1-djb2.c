#include "hash_tables.h"

/**
 * hash_djb2 - djb2 table
 * @str: param
 * Return: hash key
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int num;

	while ((num = *str++))
	hash = ((hash << 5) + hash) + num; /* hash * 33 + num */

	return (hash);
}
