#include "holberton.h"

/**
 * _puts - Prints a string followed by a new line.
 *
 * @str: store string.
 * Return: Always 0.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
