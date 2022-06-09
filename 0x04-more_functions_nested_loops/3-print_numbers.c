#include "main.h"

/**
 * print_numbers-  function that prints the numbers
 * Description: Print numbers from 0 - 9 and store on _putchar
 * Return: void
 */

void print_numbers(void)
{
	int i;

	for  (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
