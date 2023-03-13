#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number all arguments it receives
 * @argv: Argument vector
 * @argc: Argument count
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int  m, n, mul;

	if (argc != 3)
	{
		 printf("Error\n");
		 return (1);
	}
	m = atoi(argv[1]);
	n = atoi(argv[2]);
	mul = m * n;
	printf("%d\n", mul);
	return (0);
}
