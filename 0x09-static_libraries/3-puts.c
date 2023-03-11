#include "main.h"
#include <stdio.h>

/**
 * _puts - print a string
 *
 * @str: string pointer
 *
 * Return: nothing
*/

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] >= 0; i++)
	{
		if (str[i] == '\0')
		{
			printf("\n");
			break;
		}
		printf("%c", str[i]);
	}
}
