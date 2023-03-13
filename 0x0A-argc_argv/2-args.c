#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number all arguments it receives
 * @argv: Argument vector
 * @argc: Argument count
 * Return: Always 0
 */

int main(int argc, __attribute__ ((unused)) char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
