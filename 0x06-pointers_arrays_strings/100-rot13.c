#include "main.h"

/**
* rot13 - function that access a string using rot13
* @s: pointer to char
* Return: char
*/

char *rot13(char *s)
{
	int i = 0;
	int j = 0;
	char *l = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz"
	char *r13 = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm"

	while (*(s + i) != '\0')
	{
		while (*(i + j) != '\0')
		{
			if (*(s + i) == *(l + j))
			{
				*(s + i) = *(r13 + j);
				break;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (s);
}
