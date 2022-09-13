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
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		_putchar(ch);
		_putchar('\n');
	}
}
