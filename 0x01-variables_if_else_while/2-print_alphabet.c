#include <stdio.h>

/**
 * main - Entry point
 *
 * print alphabets in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
