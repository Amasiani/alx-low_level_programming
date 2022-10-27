#include "main.h"

/**
* cap_string - capitalize first letter
* @s: Value to check
* Return: character
*/

char *cap_string(char *s)
{
	int i = 0, len;
	int sel_word[] = {9, 32, 33, 34, 10, 44, 59, 63, 41, 123, 125, 46, 40};

	if (*(s + i) >= 97 && *(s + i) <= 122)
		*(s + i) = *(s + i) - 32;
	i++;
	while (*(s + i) != '\0')
	{
		for (len = 0; len < 13; len++)
		{
			if (*(s + i) == sel_word[i])
			{
				if (*(s + (i + 1) >= 97) && *(s + (i + 1) <= 122))
					*(s + (i + 1) = *(s + i)) - 32
				break;
			}
		}
		i++
	}
	return (s);
}
