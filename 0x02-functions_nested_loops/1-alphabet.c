#include "main.h"
/**
 * print_alphabet - print lower case letters with a new line
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
