#include "holberton.h"

/**
 * set_string - sets the value of a pointer to char.
 *
 * @s: double pointer.
 * @to: change value of pointer to this.
 * Return: nothing.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
