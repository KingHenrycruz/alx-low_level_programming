#include <stdio.h>

/**
 * main - Prints alphabets in lowercase followed by a new line
 * Return: Always 0.
 */

int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
{
	putchar(num + '0');
}
	putchar('\n');
	return (0);
}
