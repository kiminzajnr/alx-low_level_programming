#include "holberton.h"
/**
 * _strcmp - compares two strings.
 *
 * @s1: first string.
 * @s2: second string.
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int result;
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			break;
		}
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
