#include "main.h"

/**
 * _strncat - Concatenates two strings using at most an inputted number of bytes
 * @dest: The destination of the appended string
 * @src: Where it appended from
 * @n: The number of bytes
 * Return: A pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
