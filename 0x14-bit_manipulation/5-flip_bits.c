#include "main.h"

/**
* flip_bits - return the number of bits to flip to get the from
* one number to the other
* @n: number
* @m: number
*
* Return: number of bit n need to chnag to be equal to m
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, n_bits;

	for (n_bits = i = 0; i < 64; i++, n_bits++)
		if (((n >> i) & 1) == ((m >> i) & 1))
			n_bits--;
	return (n_bits);
}
