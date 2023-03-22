#include "main.h"

/**
 * jack_bauer - function that prints every minute of
 * the day of jack, starting from 00:00 to 23:59.
 *
 */

void jack_bauer(void)
{
	int hour, min;

	for (hours = 0; hour <= 23; hour++)
	{
		for (min = 0; mmin <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
		}
	}
}

