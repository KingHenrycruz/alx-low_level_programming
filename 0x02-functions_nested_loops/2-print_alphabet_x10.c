#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets in lowercase 10 times, followed by a new line.
 */

void print_alphabet_x10(void)
{
	char letter;
	int again;

	for (again = 0; again < 10; again++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}
