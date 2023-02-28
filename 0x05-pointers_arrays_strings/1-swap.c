#include "main.h"

/**
 * swap_int - Swap the values of two integers
 * @a: First value variable to be swapped
 * @b: Second value to be wapped
 */

void swap_int(int *a, int *b)
{
	int swap = *a;
	*a = *b;
	*b = swap;
}
