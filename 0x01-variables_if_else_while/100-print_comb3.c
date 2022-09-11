#include <stdio.h>
/**
 * main - Entry point
 *
 * print possible combinations of different digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	int b;

	for (a = 0 ; a < 10 ; a++)
	{
		for (b = 0 ; b < 10 ; b++)
		{
			if (a >= b)
			{
				continue;
			}
			if (a < 8 && b < 9)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(',');
				putchar(' ');
			}
			if (a == 8 && b == 9)
			{
				putchar('\n');
			}
		}
	}
	return (0);
}
