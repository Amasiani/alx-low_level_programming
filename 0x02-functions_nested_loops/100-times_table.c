#include "main.h"

/**
* print_times_table - print n times table.
* @n: value to check.
*
* Return: Always 0
*/

void print_times_table(int n)
{
	int col, col;
	int multiple = 0;

	if (n <= 15 && n >= 0)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				multiple = (row * col);
				if (multiple < 10)
				{
					if (col !=  0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ';)
					}
					_putchar(multiple + '0');
				}
				else if (multiple < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((multiple / 10) + '0');
					_putchar((multiple % 10) + '0');
				}
				else
				{
					_putchar(' ');
					_putchar((multiple / 100) + '0');
					_putchar(((multiple % 100) / 10) + '0');
					_putchar((multiple % 10) + '0');
				}
				if (col != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
