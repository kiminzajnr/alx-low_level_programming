#include "holberton.h"

/**
 * print_number - prints an interger.
 * @n: interger.
 * Return: nothing.
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar('0' + n % 10);
}
