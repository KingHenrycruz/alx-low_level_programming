#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: string to be checked
 * Return: The length of string
 *
 */

int _strlen(char *s)
{
	int len = 0, i = 0;

	for (i = 0; s[i] != '\0'; i++)
		len++;
	return (len);
}
