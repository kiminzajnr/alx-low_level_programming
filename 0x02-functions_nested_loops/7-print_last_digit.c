#include "holberton.h"

/**
 * print_last_digit - print the last digit of a number.
 *
 * @n: to be computed
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	return (last_digit);
}
