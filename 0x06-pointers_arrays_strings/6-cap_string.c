#include "main.h"
#include <stdio.h>

/**
 * cap_string - function that capitalizes all words of a string.
 * @s: Pointer to Char
 * Return: char
*/

char *cap_string(char *s)
{
	int counter = 0, i;
	int sel_word[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(s + counter) >= 97 && *(s + counter) <= 122)
		*(s + counter) = *(s + counter) - 32;
	counter++;
	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(s + counter) == sel_word[i])
			{
				if ((*(s + (counter + 1)) >= 97) && (*(s + (counter + 1)) <= 122))
					*(s + (counter + 1)) = *(s + (counter + 1)) - 32;
				break;
			}
		}
		counter++
	}
	return (s);
}
