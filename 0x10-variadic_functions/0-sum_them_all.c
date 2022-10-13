#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - gets the sum of all the parameters
 * @n: stores an unsigned integer
 *
 * Return: sum of the integers
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n != 0)
	{
		va_list ap;
		unsigned int i;
		unsigned int sum;

		sum = 0;
		va_start(ap, n);
		for (i = 0 ; i < n ; i++)
		{
			sum = sum + va_arg(ap, int);
		}
		return (sum);
	}
	else
	{
		return (0);
	}
}
