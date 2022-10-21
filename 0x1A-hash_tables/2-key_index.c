#include "hash_tables.h"

/**
 * key_index - Calls hash_djb2() to get the proper key value
 * @key: Pointer to the key
 * @size: Size of the array
 *
 * Return: The index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return ((hash_djb2(key)) % size);
}
