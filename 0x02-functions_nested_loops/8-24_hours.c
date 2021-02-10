#include "holberton.h"
#include <stdio.h>

/**
 * jack_bauer - print every minute of jack bauer.
 *
 */
void jack_bauer(void)
{
	int hour;
	int minute;

	for (hour = 0; hour <= 23; hour++)
	for (minute = 0; minute <= 59; minute++)
	{
		_putchar('0' + hour / 10);
		_putchar('0' + hour % 10);
		_putchar(':');
		_putchar('0' + minute / 10);
		_putchar('0' + minute % 10);
		_putchar('\n');
	}
}

