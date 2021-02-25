#include "holberton.h"

/**
  * is_prime -wrapper function to check for prime.
  * @n: input number.
  * @i: factor to check if n is divisible.
  * Return: 1 if prime, 0 if not else recurse.
  */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0)
		return (0);
	return (is_prime(n, i - 1));
}
/**
 * is_prime_number - checks if input integer is prime number.
 *
 * @n: input number.
 * Return: return 1 if prime and 0 otherwise.
 */
int is_prime_number(int n)
{
	if (n < 3)
		return (0);
	return (is_prime(n, n - 1));
}
