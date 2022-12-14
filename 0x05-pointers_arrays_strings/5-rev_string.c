#include "main.h"

/**
* rev_string - reverses a string
* @s: value to check
* Return: newline
*/

void rev_string(char *s)
{
	char reverse = s[0];
	int i;
	int counter = 0;

	while (s[counter] != '\0')
		counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		reverse = s[i];
		s[i] = s[counter];
		s[counter] = reverse;
	}
}
