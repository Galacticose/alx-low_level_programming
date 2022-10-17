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
	int l;

	va_start(ap, format);
	l = strlen(format) - 1;
	in = 0;
	while (format[in])
	{
		switch (format[in])
		{
			case 'c':
				{
					ch = va_arg(ap, int);
					printf("%c", ch);
				}
				break;
			case 'i':
				{
					ing = va_arg(ap, int);
					printf("%d", ing);
				}
				break;
			case 's':
				{
					str = va_arg(ap, char *);
					printf("%s", str);
					if (str == NULL)
						printf("(nil)");
				}
				break;
			case 'f':
				{
					flo = va_arg(ap, double);
					printf("%f", flo);
				}
				break;
		}
		if ((in != l && format[in] == 'c') || (in != l && format[in] == 'f') || (in != l && format[in] == 's') || (in != l && format[in] == 'i'))
		{
			printf(", ");
		}
		in++;
	}
	printf("\n");
	va_end(ap);
}
