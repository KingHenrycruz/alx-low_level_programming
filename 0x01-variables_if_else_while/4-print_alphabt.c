#include <stdio.h>

/**
 * main - Prints alphabets in lowercase followed by a new line
 * Return: Always 0.
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
{
	if (letter != 'e' && letter != 'z')
		putchar(letter);
}
	putchar('\n');
	return (0);
}
