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
	putchar((num % 10) ++ '0');
	if (num == 0)
		continue;
	putchar(',');
	putchar(' ');
}
	putchar('\n');
	return (0);
}
