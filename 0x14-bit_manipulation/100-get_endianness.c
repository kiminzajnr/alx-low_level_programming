#include "holberton.h"

/**
  * get_endianness - checks endianess.
  */
int get_endianness(void)
{
	int i = 1;
	char *ch = (char *)&i;

	if (*ch)
		return (1);
	return (0);
}
