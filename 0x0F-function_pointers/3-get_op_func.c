#include "3-calc.h"

/**
* get_op_func - select correct funtion to use for the operation asked by user
* @s: operator passed as argument
*
* Return: pointer function that corespond to the operation
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

	i = 0;
	while (i < 5)
	{
		if (*s == *(ops[i]).op)
			return (*(ops[i]).f);
		i++;
	}
	return (NULL);
}
