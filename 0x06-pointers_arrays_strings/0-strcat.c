#include "holberton.h"

/**
 * *_strcat - concatenates two strings.
 *
 * @dest: resulting string.
 * @src: source string.
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n;

	n = string_length(dest);
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
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
