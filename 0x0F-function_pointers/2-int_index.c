#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer.
 * @array: array of integers.
 * @size: size of array.
 * @cmp: pointer to the function to compare values.
 *
 * Return: index if integers are equal,
 * -1 if no element matches or if size <= 0.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
		for (i = 0; i < size; i++)
			if ((cmp)(array[i]))
				return (i);
	return (-1);
}
