#include "holberton.h"

/**
 * main - debugging example
 * Return: 0
 */
int main(void)
{
	char *holberton = "Holberton";
	int i;

	for (i = 0; holberton[i] != '\0'; i++)
	{
		_putchar(holberton[i]);
	}
	_putchar('\n');
	return (0);
}
