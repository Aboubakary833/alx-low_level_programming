/**
 * key_index - Generate index for a key/value pair hash node
 * @key: Key
 * @size: Size of the hash table array
 * Return: index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
