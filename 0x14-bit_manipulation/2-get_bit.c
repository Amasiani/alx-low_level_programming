#include "main.h"

/**
* get_bit - set te value of a bit to 1 at a given index
* @n: Number base
* @index: index to get
*
* Return: I if it worked else -1
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32)
		return (-1);

	return ((n >> index) & 1);
}
