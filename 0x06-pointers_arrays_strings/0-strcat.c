#include "main.h"

/**
* *_strcat - concat two string overwriting the null byte
* and add the null byte in the new string
* @desk: destination string
* @src: source string
*
* Return: Return s pointer to resulting string
*/

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (desc[len])
	{
		len++;
	}
	if (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
