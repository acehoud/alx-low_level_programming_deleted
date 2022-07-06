#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - correct operator
 * @s: operator
 *
 * Return: Always return 0
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].op; i++)
	{
		if (strcmp(s, ops[i]) == 0)
		{
			return (ops[i].f);
		}
	}
	printf("Error\n");
	exit(99);
}