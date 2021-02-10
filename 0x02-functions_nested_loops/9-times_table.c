#include "holberton.h"

/**
 * times_table - print the 9 times table, starting with zero.
 *
 */
void times_table(void)
{
	int n;
	int i;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (i = 1; i <= 9; i++)
		{
			int result = n * i;

			_putchar(',');
			_putchar(' ');
			(result <= 9) ?
			_putchar(' ') :
			_putchar('0' + (result / 10));
			_putchar('0' + (result % 10));
		}
	_putchar('\n');
	}
}
