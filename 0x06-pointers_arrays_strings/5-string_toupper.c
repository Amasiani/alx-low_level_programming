#include "main.h"

/**
* string_toupper - change lower case to upper
* @ch: value to check
* Return: string value
*/

char *string_toupper(char *ch)
{
	int i = 0;

	while (*(ch + i) != '\0')
	(
		if (*(ch + i) >= 97 && *(ch + i) <= 122)
			*(ch + i) = *(ch + i) - ' ';
		i++;
	)
	return (ch);
}
