#include "main.h"

/**
 * factorial - get the factorial of a number
 * @n: stores an integer value
 *
 * Return: the result of the factorial
 */
int factorial(int n)
{
	if (n > 0)
	{
		n = n * factorial(n - 1);
		return (n);
	}
	else if (n < 0)
	{
		return -1;
	}
	else
	{
		return 1;
	}
}
