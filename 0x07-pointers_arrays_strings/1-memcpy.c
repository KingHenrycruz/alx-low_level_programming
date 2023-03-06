#include "main.h"

/**
 * _memcpy - copies memory area
 * @src: memory area to be copied from
 * @dest: memory area to be copied to
 * @n: memory bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);
}