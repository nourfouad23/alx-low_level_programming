#include "hash_tables.h"
/**
 *hash_table_get - get value with key
 *
 *@ht: param
 *@key: param
 *
 *Return: null or value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
hash_node_t *table_node;
unsigned long int table_index;

if (key == NULL || ht == NULL)
return (NULL);

table_index = key_index((const unsigned char *)key, ht->size);
table_node = ht->array[table_index];

for (; table_node != NULL; table_node = table_node->next)
{
if (strcmp(table_node->key, key) == 0)
return (table_node->value);
}
return (NULL);
}
