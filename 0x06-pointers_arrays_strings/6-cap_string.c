#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: Pointer to Char
 * Return: char.
 */

char *cap_string(char *s)
{
	int i = 0, i;
	int caps = 13;
	char sel[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;
		while (i < caps)
		{
			if ((a == 0 || s[a - 1] == sel[i] && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++
		}
		a++
	}
	return (s);
}
