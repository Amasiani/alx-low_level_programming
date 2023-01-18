#include "main.h"

/**
* _strcat - concat two string overwriting the null byte
* and add the null byte in the new string
* @dest: destination string
* @src: source string
*
* Return: Return s pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (*(dest + len) != '\0')
		len++;
	while (i >= 0)
	{
		*(dest + len) = *(src + i);
		if (*(src + i) == '\0')
			break;
		len++;
		i++;
	}
	return (dest);
}
