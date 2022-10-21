#include "main.h"

/**
* more_numbers - print 10 times number 0 - 14 followed by newline.
*
* Return: Zero
*/

void more_numbers(void)
{
	int count = 0;
	int num;

	while (count < 15)
	{
		for (num = 0; num < 14; num++)
		{
			if (num > 9)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
