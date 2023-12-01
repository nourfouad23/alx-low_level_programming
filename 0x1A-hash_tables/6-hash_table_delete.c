#include "hash_tables.h"

/**
 * hash_table_delete - To delete a table
 * @ht: param
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *table_head = ht;
	hash_node_t *table_node, *temp;
	unsigned long int x;

	for (x = 0; x < ht->size; x++)
	{
		if (ht->array[x] != NULL)
		{
			table_node = ht->array[x];
			while (table_node != NULL)
			{
				temp = table_node->next;
				free(table_node->key);
				free(table_node->value);
				free(table_node);
				table_node = temp;
			}
		}
	}
	free(table_head->array);
	free(table_head);
}
