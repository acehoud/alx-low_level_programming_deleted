#include "main.h"

/**
 * main - starting point for program
 * Return 0
 */

int main(void)
{
	char x[9] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(x[i]);
	}

	_putchar('\n');

	return (0);
}
