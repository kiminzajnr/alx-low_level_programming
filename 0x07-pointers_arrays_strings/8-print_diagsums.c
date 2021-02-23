#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagnols of square matrix.
 *
 * @a: pointer to array element.
 * @size: size of matrix.
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int m, sum, sum1;

	sum = 0;

	for (m = 0; m < size; m++)
		sum += *(a + ((size * m) + m));
	sum1 = 0;
	for (m = 1; m <= size; m++)
		sum1 += *(a + ((size * m) - m));
	printf("%d, %d\n", sum, sum1);
}
