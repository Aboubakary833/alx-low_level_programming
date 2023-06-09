#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Set a new hash_node
 * @ht: The Hash Table
 * @key: The node key
 * @value: The node value
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *newNode;
unsigned long int i, idx;
char *cpy;
if (ht == NULL || *key == '\0' || value == NULL)
	return (0);
cpy = strdup(value);
	if (cpy == NULL)
		return (0);
idx = key_index((const unsigned char *)key, ht->size);
for (i = idx; ht->array[i]; i++)
{
	if (strcmp(ht->array[i]->key, key) == 0)
	{
		free(ht->array[i]->value);
		ht->array[i]->value = strdup(value);
		return (1);
	}
}
newNode = malloc(sizeof(hash_node_t));
if (!newNode)
{
	free(cpy);
	return (0);
}
newNode->key = strdup(key);
if (newNode->key == NULL)
{
	free(newNode);
	return (0);
}
newNode->value = strdup(value);
newNode->next = ht->array[idx];
ht->array[idx] = newNode;

return (1);
}
