#include "main.h"

/**
* clear_bit - set the value of a bit to 0 at a given index
* @n: Number to clear
* @index: position to clear
*
* Return: 1 if it worked else -1
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 32)
		return (-1);
	*n = ~(1 << index) & *n;
	return (1);
}
