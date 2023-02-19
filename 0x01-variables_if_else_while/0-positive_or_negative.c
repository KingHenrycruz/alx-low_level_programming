#include <stdlib.h>
#include <time.h>

/**
 * main - Prints Using conditional statement to print number type
 * Return:  Always zero
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
{
	printf("%d is a negative\n", n)
}
	else if (n == 0)
{
	printf("%d is zero\n", n)
}
	else
{
	printf("%d is positive\n", n)
}
	return (0);
}
