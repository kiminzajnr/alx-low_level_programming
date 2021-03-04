#include "holberton.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars and
 * intitializes it with specific char.
 *
 * @size: size of chars.
 * @c: character.
 * Return: NULL if size is zero, pointer to array if success else null.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
