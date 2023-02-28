#include "main.h"
#include <stdio.h>

/**
 * puts2 - Function that prints every other character of a string
 * @str: string character to be printed
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 1)
	{
		printf("%c", str[i]);
	}

	printf("\n");
}
