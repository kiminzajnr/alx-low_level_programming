#include "holberton.h"

/**
  * ispalindrome - wrapper function to check for palindrome.
  * @s: string.
  * @i: integer pointing the beginning.
  * @j: integer pointing the end.
  * Return: 1 if palindrom, 0 otherwise.
  */
int ispalindrome(char *s, int i, int j)
{
	if (i == j)
		return (1);
	else if (s[i] != s[j])
		return (0);
	if (i < j)
		return (ispalindrome(s, i + 1, j - 1));
	return (1);
}
/**
 * is_palindrome - returns 1 if string is palindrome, 0 if not.
 *
 * @s: string.
 * Return: 1 if palindrome 0 if not.
 */
int is_palindrome(char *s)
{
	if (!*s)
		return (1);
	return (ispalindrome(s, 0, _strlen_recursion(s) - 1));
}

/**
 * _strlen_recursion - prints a string.
 *
 * @s: string.
 * Return: length of a string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
