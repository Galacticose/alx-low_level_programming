#include "main.h"
#include <string.h>

/**
 * puts_half - print the second half of a string
 * @str: stores a character
 *
 * does not return any value
 */
void puts_half(char *str)
{
	int i;
	int len;
	int n;

	len = strlen(str);
	n = len / 2;
	for (i = n ; i < len ; i++)
	{
		_putchar(str[i]);
		if (len % 2 != 0)
		{
			n = (len - 1) / 2;
			for (i = n ; i < len - 1 ; i++)
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
