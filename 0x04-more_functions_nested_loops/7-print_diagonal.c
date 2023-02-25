#include "main.h"

/**
 * print_diagonal - Print a diagonal line
 * @n: The number of _ characters
 */

void diagonal_line(int n)
{
	int len, space;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (space = 0; space < len; space ++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;
			_putchar('\\');
		}
	}
	_putchar('\n');
}
