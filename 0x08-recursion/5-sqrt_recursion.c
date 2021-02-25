#include "holberton.h"
/**
 * _sqrt_recursion - returns square root of a number.
 *
 * @n: number.
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	int square = 2;

	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	return (isqrt(n, square));
}

/**
  * isqrt - wrapper function to check for squaroot.
  *
  * @n: number to check for squareroot.
  * @i: squareroot.
  * Return: 1 if squareroot is found, -1 if not found else recurse.
  */
int isqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (isqrt(n, i + 1));
}
