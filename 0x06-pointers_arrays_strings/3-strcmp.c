#include "main.h"

/**
 * _strcmp - compares pointers of two strings
 * @s1: first string pointer
 * @s2: second string pointer
 * Return: s1 - s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
