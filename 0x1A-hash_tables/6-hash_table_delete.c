#include "hash_tables.h"

/**
 * hash_table_delete - Delete a given Hash Table
 * @ht: Hash Table
 * Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *copy = ht;
	hash_node_t *node, *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			node = ht->array[i];
			while (node)
			{
				tmp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = tmp;
			}
		}
	}
	free(copy->array);
	free(copy);
}
