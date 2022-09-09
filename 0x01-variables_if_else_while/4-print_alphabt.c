#include <stdio.h>
/**
 * main - Entry point
 *
 * print lower case alphabets except q and e
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch < 'z' ; ch++)
	{
		if (ch == 'e' && ch == 'q')
		{
			continue;
			putchar(ch);
		}
	}
	putchar('\n');
	return (0);
}
