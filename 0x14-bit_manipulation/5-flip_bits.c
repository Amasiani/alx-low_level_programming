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
	unsigned int n_bits;

	for (n_bits = 0; n || m; n >>= 1, m >>=1)
		if ((n & 1) != (m & 1))
			n_bits++;
	return (n_bits);
}
