#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbers in parameters
 * @separator: string between numbers
 * @n: stores an unsigned integer
 *
 * Does not return any value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		if (separator != NULL)
		{
			if (i < (n - 1))
			{
				printf("%d%s", va_arg(ap, int), separator);
			}
			else
			{
				printf("%d", va_arg(ap, int));
			}
		}
		else
		{
			printf("%d", va_arg(ap, int));
		}
	}
	printf("\n");
	va_end(ap);
}
