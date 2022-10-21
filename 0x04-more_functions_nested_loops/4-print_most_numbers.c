#include "main.h"

/**
* print_most_numbers - print number 0 - 9 followed by newline
*
* Return: zero.
*/

void print_most_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		if (num != 2 && num != 4)
		{
			_putchar(num + '0');
		}
	}
	_putchar('\n');
}
