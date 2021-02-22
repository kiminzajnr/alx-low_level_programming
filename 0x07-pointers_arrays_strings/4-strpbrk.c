#include "holberton.h"
#include <stdio.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string.
 * @accept: bytes.
 * Return: pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	char *stringChars = NULL;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		stringChars = accept;
		while (*stringChars != '\0')
		{
			if (*s == *stringChars)
				return (s);
			stringChars++;
		}
		s++;
	}
	return (s);
}
