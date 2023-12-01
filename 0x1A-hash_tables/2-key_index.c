#include "hash_tables.h"

/**
 * key_index - get the key
 * @key: param
 * @size: param
 * Return: index key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
