#include "holberton.h"

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 *
 * @s: string.
 * @accept: bytes.
 * Return: pointer to the byte in s.
 */
char *_strpbrk(char *s, char *accept)
{
	char *stringChars;

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
