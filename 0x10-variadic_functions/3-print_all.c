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
	int in;
	char ch;
	int ing;
	char *str;
	float flo;

	va_start(ap, format);
	in = 0;
	while (format[in])
	{
		if ((format[in] == 'c') || (format[in] == 'i') || (format[in] == 's') || (format[in] == 'f'))
		{
			switch (format[in])
			{
				case 'c':
					{
						ch = va_arg(ap, int);
						printf("%c, ", ch);
					}
					break;
				case 'i':
					{
						ing = va_arg(ap, int);
						printf("%d, ", ing);
					}
					break;
				case 's':
					{
						str = va_arg(ap, char *);
						printf("%s, ", str);
						if (str == NULL)
							printf("(nil), ");
					}
					break;
				case 'f':
					{
						flo = va_arg(ap, double);
						printf("%f, ", flo);
					}
					break;
			}
		}
		in++;
	}
	printf("\n");
	va_end(ap);
}
