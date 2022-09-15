#include <stdio.h>

/**
 * main - Entry point
 * @i: stores an int value
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	for (i = 1 ; i <=100 ; i++)
	{
		putchar(i + '0');
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		printf("\n");
	}
       return (0);	
}
