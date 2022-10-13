#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <string.h>

/**
 * print_all - print different data types
 * @format: list of types of arguments
 *
 * Does not return any value
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i;
	unsigned int a;
	float f;
	char c;
	char *s;
	unsigned int len;

	len = strlen(format);
	a = 0;
	while (a < len)
	{
		va_start(ap, format);
		switch (format[a])
		{
			case 'c':
				c = va_arg(ap, int);
				printf("%c, ", c);
				a++;
				break;
			case 'i':
				i = va_arg(ap, int);
				printf("%d, ", i);
				a++;
				break;
			case 'f':
				f = va_arg(ap, double);
				printf("%f, ", f);
				a++;
				break;
			case 's':
				s = va_arg(ap, char *);
				printf("%s, ", s);
				if (s == NULL)
					printf("(nil)");
				a++;
				break;
		}
		a++;
	}
	printf("\n");
	va_end(ap);
}
