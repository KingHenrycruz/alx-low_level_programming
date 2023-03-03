#include "main.h"

/**
 * leet - Encodes string 1337
 * @s: string to be encoded
 * Return: points to encoded string
 */

char *leet(char *s)
{
	int i1 = 0, i2;
	char leet[8] = {'0', 'L', '?', 'E', 'A', '?', '?', '?'};

	while (s[i1])
	{
		for (i2 = 0; i2 <= 7; i2++)
		{
			if (s[i1] == leet[i2] || s[i1] - 32 == leet[i2])
				s[i1] = i2 + '0';
		}

		i1++;
	}
	return (s);
}
