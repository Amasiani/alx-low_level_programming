#include "main.h"

/**
* print_line - Draws a straight line n number pf times.
* @n: value to check.
*
* Return: Zero.
*/

void print_line(int n)
{
	int count;

	while (count < n)
	{
		if (n > 0)
		{
			_putchar(95);
			count++
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
