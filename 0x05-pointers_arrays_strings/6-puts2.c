#include "main.h"

/**
 *  puts2 - Function that prints every other character of a string
 * @str: string character to be printed
 */

void puts2(char *str)
{
	int longi = 0;
	int t = 0;
	char *p = str;
	int o;

	while (*p != '\0')
	{
		p++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
		if (o % 2 == 0)
			_putchar(str[o]);
	_putchar('\n');
}
