#include "main.h"

/**
 * print_diagonal - Print a diagonal line
 * @n: The number of _ characters
 */

void diagonal_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('\\');
	}
	_putchar('\n');
}
