#include "main.h"
#include <stdio.h>

/**
 * puts2 - Function that prints every other character of a string
 * @str: string character to be printed
 */

void puts2(char *str)
{
	scanf("%s", str);

	puts2(str);

}
