#include "main.h"

/**
 * jack_bauer - Function prototype
 * Description: Prints all minutes of the day of Jack Bauer
 * Format: HH:MM, FROM 00:00 TO 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int t;

	for (t = 0; t < 24; t++)
	{
		int m;

		for (m = 0; m < 60; m++)
		{
			_putchar((t / 10) + '0');
			_putchar((t % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
