#include "main.h"

/**
* print_number - prints an integer
* @n: value to check for
* Return: Always 0
*/

void print_number(int n)
{
	unsigned int i, j, counter;

	if (n < 0)
	{
		_putchar(45);
		i = n * -1;
	}
	else
	{
		i = n;
	}

	j = i;
	counter = 1;

	while (j > 9)
	{
		j /= 10;
		counter *= 10;
	}

	for (; counter >= 1; counter /= 10)
	{
		_putchar(((i / counter) % 10) + 48);
	}
}
