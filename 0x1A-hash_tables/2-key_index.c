#include"hash_tables.h"

/**
 * key_index: A function that gives you the index of a key.
 * @key: It is a character.
 * @size:It is a integer.
 * Return: the index at which the key/value pair should,
 * be stored in the array of the hash table
**/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value;

	hash_value = hash_djb2(key);

	return (hash_value % size);
}
