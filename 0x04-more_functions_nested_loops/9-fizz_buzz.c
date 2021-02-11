#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i <= 9)
		{
			if ((i % 3) == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
			}
			else if ((i % 5) == 0)
			{
				_putchar('B');
				_putchar('u');
				_putchar('z');
				_putchar('z');
			}
			else if ((i % 3) == 0 && (i % 5) == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
				_putchar(' ');
				_putchar('B');
				_putchar('u');
				_putchar('z');
				_putchar('z');
			}
			else
			{
				_putchar('i');
			}
		}
		else if (i <= 99)
		{
			if ((i % 3) == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
			}
			else if ((i % 5) == 0)
			{
				_putchar('B');
				_putchar('u');
				_putchar('z');
				_putchar('z');
			}
			else if ((i % 3) == 0 && (i % 5) == 0)
			{
				_putchar('F');
				_putchar('i');
				_putchar('z');
				_putchar('z');
				_putchar(' ');
				_putchar('B');
				_putchar('u');
				_putchar('z');
				_putchar('z');
			}
			else
			{
				_putchar('0' + i / 10);
				_putchar('0' + i % 10);
			}
		}
		else
		{
			_putchar('B');
			_putchar('u');
			_putchar('z');
			_putchar('z');
		}
		_putchar(',');
		_putchar(' ');
	}
	return (0);
}
