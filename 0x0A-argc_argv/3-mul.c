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
	int i, mul;

	if (argc > 1)
	{
		for (i = 0; i < argc; i++)
			mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
