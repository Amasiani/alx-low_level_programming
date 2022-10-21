#include "main.h"

/**
* print_square - Prints square # followed by a new line,newline if size is zero
* @size: value to look for.
*
* Return: Zero
*/

void print_square(int size)
{
	int col, row;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (col = 0; col < row; col++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
