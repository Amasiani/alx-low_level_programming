#include "main.h"

/**
* *_strcat - concat two string overwriting the null byte
* and add the null byte in the new string
* @desk: destination string
* @src: source string
*
* Return: Reutrn s pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{
	int len = 0, i = 0;

	while (*(dest + len) != '\0')
	{
		len++;
	}
	if (*(dest + len) + *(src + i))
	{
		*(dest + len) = *(src + i);
		if (*(src + i) == '\0')
			break;
		len++;
		i++;
	}
	return (dest);
}
