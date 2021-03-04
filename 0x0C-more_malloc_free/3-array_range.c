#include "holberton.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: minimum value.
 * @max: maximum value
 *
 * Return: pointer to newly created array of success,
 * NULL if min > max, or if malloc fails.
 */
int *array_range(int min, int max)
{
	int array_size = 0, i;
	int *new_array;

	if (min > max)
		return (NULL);
	while (min <= max)
	{
		array_size++;
		min++;
	}
	new_array = malloc(sizeof(int) * array_size);
	if (new_array == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		*new_array = *(new_array + i);
	}
	return (new_array);
}
