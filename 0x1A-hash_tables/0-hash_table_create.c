#include "hash_tables.h"

/**
 * hash_table_create - Make a hash table
 * @size: array size
 *
 * Return: Null or pointer to a new table
 *
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table_1;
	unsigned long int x;

	table_1 = malloc(sizeof(hash_table_t));
	if (table_1 == NULL)
		return (NULL);

	table_1->size = size;
	table_1->array = malloc(sizeof(hash_node_t *) * size);
	if (table_1->array == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
		table_1->array[x] = NULL;

	return (table_1);
}
