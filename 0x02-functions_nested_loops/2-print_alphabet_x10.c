#include "main.h"

/**
 * print_alphabet_x10 - print lower case letters 10 times
 */
void print_alphabet_x10(void)
{
	char ch;
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		for (ch = 'a' ; ch <= 'z' ; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
