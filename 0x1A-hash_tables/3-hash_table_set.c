#include "hash_tables.h"
/**
 *hash_table_set - table elements to add
 *@ht: param
 *@key: param
 *@value: param
 *Return: 1 if is success or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long table_index, table_index;
hash_node_t *new_node;

if (ht  == NULL || key == NULL || value == NULL)
return (0);

table_index = ht->table_index;
table_index = key_index((const unsigned char *)key, table_index);

if (ht->array[table_index] != NULL && strcmp(ht->array[table_index]->key, key) == 0)
{
ht->array[table_index]->value = strdup(value);
return (1);
}

new_node = malloc(sizeof(hash_node_t));

if (new_node == NULL)
return (0);

new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = ht->array[table_index];
ht->array[table_index] = new_node;
return (1);
}
