#include "main.h"

/**
* binary_to_uint - Convert a binary number to an unsigned int
* @b: pointer toa string of 0 and 1 chars
*
* Return: converted number or 0 if b is NULL or contain more cha
* or than 0 and 1
*/

unsigned int binary_to_uint(const char *b)
{
	int i, opt;
	unsigned int number;

	if (!b)
		return (0);
	
	number = 0;

	for (i =  0; b[i] != '\0'; i++)
		;
	for (i--, opt = 1; i >= 0; i--, opt *= 2)
	{
		if (b[i] != 48 && b[i] != 49)
			return (0);
		if (b[i] & 1)
			number += opt;
	}
	return (number);
}
