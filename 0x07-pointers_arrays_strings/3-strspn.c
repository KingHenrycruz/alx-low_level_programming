#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: The strin to be searched
 * @accept: Prefix to be measured
 * Return: number of bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bytes++;
				break;
			}
			else if (accept[i] + 1 == '\n')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
