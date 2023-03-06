#include "main.h"

/**
 * _memcpy - copies memory area
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int n;

	for (i = 0; i < n; i++)
		src[i] = dest[i];

	return (dest);
}
