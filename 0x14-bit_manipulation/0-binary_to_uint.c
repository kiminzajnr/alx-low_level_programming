#include <stdlib.h>
#include "holberton.h"

/**
 * binary_to_uint - converts binary number to unsigned int.
 *
 * @b: pointer to a string of 0 and 1 chars
 * Return: converted number, or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, dec = 0;

	if (b == NULL)
		return (0);
	while (b[i])
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		dec <<= 1;
		if (b[i] == '1')
			dec += 1;
		i++;
	}
	return (dec);
}
