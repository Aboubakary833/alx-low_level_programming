#include "hash_tables.h"
#include <stdlib.h>

/**
 * hash_table_create - Create a new Hash Table
 * @size: Hash Table size
 * Return: Newly created Hash Table or NULL
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *newHashTable = malloc(sizeof(hash_table_t));
hash_node_t **hashTableArray = malloc(sizeof(hash_node_t *) * size);
if (!newHashTable || !hashTableArray)
	return (NULL);

newHashTable->size = size;
newHashTable->array = hashTableArray;
for (i = 0; i < size; i++)
	newHashTable->array[i] = NULL;
return (newHashTable);
}
