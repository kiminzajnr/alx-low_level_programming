#include "holberton.h"
/**
 * *string_toupper - changes all lowercase letters of a string to upper.
 *
 * @str: string to return.
 * Return: string.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; i <= string_length(str); i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
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
