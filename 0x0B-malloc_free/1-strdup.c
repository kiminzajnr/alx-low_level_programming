#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *_strdup - returns pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string.
 * Return: NULL if str = NULL or insufficient memory, if success return
 * pointer to duplicated string.
 */
char *_strdup(char *str)
{
	int str_size, i;
	char *copy;

	if (str == NULL)
		return (NULL);
	/* allocating memory for the copy */
	str_size = string_length(str);
	copy = (char *)malloc(sizeof(char) * str_size + 1);
	if (copy == NULL)
		return (NULL);
	/* copy string */
	i = 0;
	while (str[i] != '\0')
	{
		copy[i] = str[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/**
  * string_length - finds the length of a string.
  * Return: length of c.
  * @pointer: pointer.
  */
int string_length(char *pointer)
{
	int c = 0;

	while (*(pointer + c) != '\0')
	{
		c++;
	}
	return (c);
}
