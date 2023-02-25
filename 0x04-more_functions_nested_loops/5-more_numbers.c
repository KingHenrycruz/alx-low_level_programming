#include "main.h"

/**
 * more_numbers - Print numbers between 0 and 14 ten times
 * Return: Always 0.
 */

void more_numbers(void)
{
	int num, i;

	while (i < 10)
	{
		for (num = 0; num <= 14; num++)
		{
			_putchar((num % 10) + '0');
		}

		i++;
		_putchar('\n');
	}
}
