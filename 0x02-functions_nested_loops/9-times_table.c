#include "main.h"

/**
* times_table - print 9 times table
*
* Return: Always 0
*/

void times_table(void)
{
	int row, col;
	int multiple = 0;

	for (row = 0; row < 9; row++)
	{
		_putchar(48);
		for (col = 1; col <= 9; col++)
		{
			mulriple = row * col;
			_putchar(44);
			_putchar(32);
			if (multiple <= 9)
			{
				_putchar(32);
				_putchar(multiple +48);
			}
			else
			{
				_putchar((multiple / 10) + 48);
				_putchar((multiple % 10) + 10);
			}	
		}
		_putchar('\n');
	}
}
