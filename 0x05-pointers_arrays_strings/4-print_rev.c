#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * print_rev - prints a string in reverse
 * @s: stores a character
 *
 * does not return any value
 */
void print_rev(char *s)
{
	int i;
	int len;
	int temp;

	len = strlen(s);
	for (i = 0 ; i < len/2 ; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		printf("%s\n", s);
	}
}
