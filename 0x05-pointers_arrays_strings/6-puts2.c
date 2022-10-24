#include "main.h"

/**
* puts2 - print every other string, starting with the furst character
* @s: value to check for
*/

void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		for ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
