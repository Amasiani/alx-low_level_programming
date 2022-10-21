#include "main.h"

/**
* print_numbers - prints numbers from 0 9 on newline.
*
* Return: zero.
*/

void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num += 1;
	}
	_putchar('\n')
}
