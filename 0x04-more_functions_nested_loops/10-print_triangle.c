#include "holberton.h"

/**
 * print_triangle - prints a triangle.
 *@size: prints a triangle.
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < size - i - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		if ((i + 1) == size)
		{
			break;
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
