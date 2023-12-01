#include "hash_tables.h"
/**
 *hash_table_print - print a table
 *
 *@ht: param
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *table_node;
unsigned long int table_count = 0, x = 0;

if (ht != NULL)
{
printf("{");
for (table_count = 0; table_count < ht->size; table_count++)
{
table_node = ht->array[table_count];
while (table_node != NULL)
{
if (x != 0)
printf(", ");
x = 1;
printf("'%s': '%s'", table_node->key, table_node->value);
table_node = table_node->next;
}
}
printf("}\n");
}
}
