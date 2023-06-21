#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: represents pointer to the memory block
 * @b: character to fill s
 * @n: number of bytes to be filled
 * Return: A pointer to the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
