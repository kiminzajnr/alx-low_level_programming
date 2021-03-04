#include "holberton.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * @n: string length of whole or part of s2
 * Return: pointer to new string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_str;
	unsigned int i = 0, j = 0, m, p;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	m = string_length(s1);
	p = string_length(s2);
	new_str = malloc(sizeof(char) * (m * n) + 1);
	if (new_str == NULL)
		return (NULL);
	/* insert s1 into new_str */
	while (s1[i] != '\0')
	{
		new_str[j] = s1[i];
		i++;
		j++;
	}
	/* insert s2 into new_str */
	if (n >= p)
	{
		i = 0;
		while (s2[i] != '\0')
		{
			new_str[j] = s2[i];
			i++;
			j++;
		}
	}
	i = 0;
	while ((i + 1) <= n && n <= p)
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
