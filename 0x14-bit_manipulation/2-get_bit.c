#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index.
 *
 * @n: number.
 * @index: position.
 * Return: value of the bit index or -1 if error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (n == 0)
		return (0);
	n = n >> index;
	if ((n & 1) != 0)
		return (1);
	return (0);
}
