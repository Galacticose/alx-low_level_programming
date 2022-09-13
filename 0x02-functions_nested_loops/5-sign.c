#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: stores an integer value
 *
 * Return: Always 1 when n is positive and 0 when n is zero and -1 when n is negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
