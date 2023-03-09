#include "main.h"

/**
 * factorial - function that prints the factorial of numbers
 * @n: The given number input
 * Return: -1 if < 0, 1 if = 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
