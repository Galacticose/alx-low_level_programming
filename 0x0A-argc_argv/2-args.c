#include <stdio.h>

/**
 * main - entry point
 * @argc: first operand that stores an int
 * @argv: second operand that stores a character
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
