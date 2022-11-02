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
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		else
			return (0);
		s++;
	}
}
