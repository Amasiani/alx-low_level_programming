#include "main.h"

/**
* puts_half - prints half of a string
* if odd n = (length_of_the_string - 1) / 2
* @str: value to check
* Return: half the string
*/

void puts_half(char *str)
{
	int i, len, num;

	len = 0;
	for (i = 0; str[i] != '\0'; i++)
	len++;
	num = (len / 2);
	if ((len % 2) == 1)
		num = ((len + 1) / 2);
	for (i = num; str[i] != '\0'; i++)
		_putchar(str[i]);
	_putchar('\n');
}
