#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @separator: store a string that separates strings
 * @n: number of strings
 *
 * Does not return any value
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *strings;

	va_start(ap, n);
	for (i = 0 ; i < n ; i++)
	{
		strings = va_arg(ap, char *);
		if (separator == NULL)
		{
			printf("%s", strings);
		}
		else
		{
			if (i < (n - 1))
			{
				if (strings != NULL)
				{
					printf("%s%s", strings, separator);
				}
				else
				{
					printf("(nil)%s", separator);
				}
			}
			else
			{
				if (strings != NULL)
				{
					printf("%s", strings);
				}
				else
				{
					printf("(nil)");
				}
			}
		}
	}
	printf("\n");
	va_end(ap);
}
