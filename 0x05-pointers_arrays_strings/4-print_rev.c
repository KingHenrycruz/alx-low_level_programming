#include "main.h"

/**
 * print_rev - Print strings in reverse followed by a new line
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int i;
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
