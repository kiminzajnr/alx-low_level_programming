#include "holberton.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * *str_concat - concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, n;
	char *new_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = string_length(s1) + string_length(s2) + 1;
	new_str = malloc(sizeof(char) * n);
	/* check if null is passed */
	if (new_str == NULL)
		return (NULL);
	/* insert s1 into the new string */
	while (s1[i] != '\0')
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}
	/* insert s2 into the new string */
	i = 0;
	while (s2[i] != '\0')
	{
		new_str[j] = s2[i];
		i++;
		j++;
	}
	new_str[j] = '\0';
	return (new_str);
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
