#include "main.h"

/**
 * _isdigit - checks for a digit between 0 through 9
 * @c: Number to be checked
 * Return: always 1 or 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
