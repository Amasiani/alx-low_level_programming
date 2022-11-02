#include "main.h"

/**
* _strchr -  Locates a character ijn a sting
*
* @s: string to receive and return
* @c: Character to receive
* Return: Character
*/

char *_strchr(char *s, char c)
{
	int counter = 0;

	while (*(s + counter)  != '\0')
	{
		if (*(s + counter)  == c)
			return (s);
		else
			return (0);
		counter++;
	}
	_putchar('\n');
}
