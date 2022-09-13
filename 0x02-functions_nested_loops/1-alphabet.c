#include "main.h"
/**
 * main - Entry point
 *
 * print lowercase alphabets with a new line
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
