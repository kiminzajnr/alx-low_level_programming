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
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s)
	{
		if (_strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
/**
 * *_strchr - locates a character in a string.
 *
 * @s: string.
 * @c: character to be located.
 * Return: pointer to first occurrence of NULL if no character found.
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return (NULL);
}
