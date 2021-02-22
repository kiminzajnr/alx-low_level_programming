#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string.
 * @accept: bytes.
 * Return: pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		if (strchr(accept, *s))
			return (s);
		s++;
	}
	return (NULL);
}
