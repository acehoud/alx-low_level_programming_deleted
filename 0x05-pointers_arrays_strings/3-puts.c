#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: string to print
 * Return: void
 */

void _puts(char *str)
{
	int j = 0;

	while (str[j] != '\0')
	{
		_putchar(str[j]);
		j++;
	}
}
