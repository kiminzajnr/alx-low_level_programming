#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: first integer.
 * @b: second integer.
 */
void swap_int(int *a, int *b)
{
	int t = a;

	*a = *b;
	*b = t;
}
