#include "holberton.h"

/**
 * _isdigit - checks for a digit.
 *
 * @c: value to be checked
 * Return: 1 if c is digit and 0 otherwise.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
