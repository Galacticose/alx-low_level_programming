#include "main.h"

/**
 * print_line - prints a line on the terminal
 * @n: stores an integer value
 * @i: stores an integer value
 *
 * Return: Always n (success)
 */
void print_line(int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
