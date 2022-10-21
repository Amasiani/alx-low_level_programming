#include "main.h"

/**
* print_triangle - prints a tringle
* @size: value to check
* prints newline if size is less than zero
* Return: zero
*/

voud print_triangle(int size)
{
	int row, col, calc;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < size; col++)
			{
				calc = (size - row) - 1;
				if (col < calc)
					_putchar(' ');
				else
					_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
