#include "main.h"

/**
 * more_numbers - print numbers from 0 to 15 10times
 * @i: stores an integer value
 * @a: stores an integer value
 *
 * does not return any value
 */
void more_numbers(void)
{
	int i;
	int a;

	for (i = 0 ; i < 9 ; i++)
	{
		for (a = 0 ; a < 15 ; a++)
		{
			_putchar(a + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
