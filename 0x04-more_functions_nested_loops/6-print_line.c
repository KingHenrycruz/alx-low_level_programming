#include "main.h"

/**
 * print_line - Print a straight line
 * @n: The number of _ characters
 */

void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}
	_putchar('\n')
}
