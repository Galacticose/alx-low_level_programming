#include "main.h"
#include <string.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: stores a character
 *
 * does not return any value
 */
void _puts_recursion(char *s)
{
	int i;
	int len;

	len = strlen(s);
	for (i = 0 ; i < len ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
