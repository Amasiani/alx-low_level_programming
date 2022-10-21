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

	while (count < 10)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
