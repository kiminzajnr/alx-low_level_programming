#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int aux[n];
	int i;

	for (i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}
	for (int i = 0; i < n; i++)
	{
		a[i] = aux[i];
	}
}
