#include "main.h"

/**
 * _pow_recursion - get the power of a number
 * @x: base integer
 * @y: power integer
 *
 * Return: x raise to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		x = x * _pow_recursion(x, y - 1);
		return (x);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
}
