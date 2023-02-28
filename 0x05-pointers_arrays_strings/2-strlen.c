#include "main.h"

/**
 * _strlen - A function that returns the length of a string
 * @s: string to be checked
 * Return: The length of string
 *
 */

int _strlen(char *s)
{
	int len;

	for (len = 0; len != '\0'; len++)
		s++;
	return (len);
}
