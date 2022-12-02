#include "main.h"

/**
* print_binary -  Function that prints the binary repersentation of a number
* @n: Number to print in binary
*/

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int i;

	if (n == 0)
	{
		_putchar(48);
		return;
	}
	num = n;
	for (i = 0; n != 0; n = n >> 1, i++)
		;
	for (i -= 1; i >= 0; i--)
		_putchar(48 + ((num >> i) & 1));
}
