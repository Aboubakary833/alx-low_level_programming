#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Get a value from a Hash Table
 * @ht: The Hash Table
 * @key: The
 * Return: Value of the node
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int idx;
if (!ht || !key || *key == '\0')
	return (NULL);
idx = key_index((const unsigned char *)key, ht->size);
while (ht->array[idx])
{
	if (strcmp(ht->array[idx]->key, key) == 0)
		return (ht->array[idx]->value);
}
return (NULL);
}
