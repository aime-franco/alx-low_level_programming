#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *
 * get_op_func - select correct function
 * @s: operator
 * Return: 0 success
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod}
	};
	int x;

	x = 0;
	while (x < 5)
	{
		if (ops[x].op[0] == s[0])
			return (ops[x].f);
		x++;
	}
	return (NULL);
}
