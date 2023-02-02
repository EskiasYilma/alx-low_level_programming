#include "hash_tables.h"

/**
 * recursive - helper recursive function for djb2 algorithm.
 * @str: a pointer to an array of characters
 * @hash: store an unsigned long integer representation of
 * the hash code for a given string
 * Return: hash value generated using the DJB2 algorithm.
 */

unsigned long int recursive(const unsigned char *str, unsigned long int hash)
{
	if (*str == '\0')
	{
		return (hash);
	}

	hash = (hash * 33) + *str;
	return (recursive(str + 1, hash));
}

/**
 * hash_djb2 - function implementing the djb2 algorithm.
 * @str: a pointer to an array of characters
 * Return: calculated hash value for the input string.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	return (recursive(str, 5381));
}
