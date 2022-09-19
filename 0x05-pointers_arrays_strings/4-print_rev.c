#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: stores a character
 * @i store an integer value
 *
 * does not return any value
 */
void print_rev(char *s)
{
	int i;

	for (i = strlen(s) - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
