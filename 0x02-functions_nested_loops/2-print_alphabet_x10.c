#include "main.h"

/**
* print_alphabet_x10 - Print 10* alphabets in lower case.
*
* Return: 0
*/

void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet;

	while (count++ <= 9)
	{
		for (alphabet = 'a'; alphabet < 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
