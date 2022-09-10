#include <stdio.h>
/**
 * main - Entry point
 *
 * print decimal numbers separated by commas and space
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	int a = 9;

	for (i = 0 ; i < 9 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(a + '0');
	return (0);
}
