#include <stdio.h>

/**
 * main - print 00 to 99
 *
 * Return: zero
 */
int main(void)
{
	int i;

	for (i = 0; i < 100; i++)
	{
		putchar(',');
		putchar(' ');
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
	}
	putchar('\n');
	return (0);
}
