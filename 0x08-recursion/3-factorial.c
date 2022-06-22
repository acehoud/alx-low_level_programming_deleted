#include "main.h"

/**
 * factorial - function that returns the
 * factorial of a given number
 * @n: A number to return
 * Return: Always return 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-0);
	
	if (n == 1)
		return  (1);

	return (n * factorial(n - 1));
}
