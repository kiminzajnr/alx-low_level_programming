#include "holberton.h"

/**
 * print_numbers - check the code for Holberton School students.
 *
 * Return: zero.
 */
void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0' + a);
	}
	_putchar('\n');
}
