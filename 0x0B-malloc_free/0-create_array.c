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

	if (size == 0)
		return (NULL);
	array = (char *)malloc(sizeof(c) * size);
	return (array);
}
