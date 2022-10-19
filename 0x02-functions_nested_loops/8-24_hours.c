#include "main.h"

/**
* jack_baurer - print last hour from 00:00 - 23:59
*
* Return: */

void jack_baurer(void)
{
	int hr = 0;
	int min = 0;

	while (hr <= 23)
	{
		while (min <= 59)
		{
			_putchar(hr / 10 + '0');
			_putchar(hr % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			min++;
		}
		hr++;
}
