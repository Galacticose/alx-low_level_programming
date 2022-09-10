#include <stdio.h>
/**
 * main - Entry point
 *
 * print numbers of base 16 in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char ch;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
	}
	for (ch = 'a' ; ch <= 'f' ; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
