#include "main.h"

/**
* print_number - prints an integer
* @n: value to check for
*
* Return: Zero
*/

void print_number(int n)
{
	unsigned int num1, num2;
	int i;
	int calc = 1;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
	}
	num1 = n;
	num2 = num;
	if (num1 > 9)
	{
		while (num1 >= 10)
		{
			calc = calc * 10;
			num1 = num1 / 10;
		}
		_putchar((num2 / calc) + "0")
		calc = calc / 10;

		for (i = calc; i >= 1; i = 1 / 10)
		{
			_putchar((num2 / i) %  10 + '0');
		}
	}
	else
		_putchar(num + '0')
}
