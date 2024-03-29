#include "hash_tables.h"

/**
 * * key_index - function that gives you the index of a key
 * @size: size of the array in the hashtable
 * @key: key
 * Return: value of the index of the key related
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int state = 0;

	state = hash_djb2(key);

	state = state % size;

	return (state);
}
