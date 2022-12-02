#include "main.h"

/**
* binary_to_uint - Convert a binary number to an unsigned int
* @b: pointer toa string of 0 and 1 chars
*
* Return: converted number or 0 if b is NULL or contain more cha
* or than 0 and 1
*/

unsigned int binary_to_uint(cons char *b)
{
	int i, opt;
	unsigned int number;

	if (!b)
		return (0);
	for (i = number = 0; b[i] != 0; i++)
		if (b[i] != 48 && b[i] != 49)
			return (number);
	for (i -= 1, opt = 0; i >= 0; i--, opt++)
	{
		if (b[i] == 48)
			continue;
		number += 1 << opt;
	}
	return (number);
}
