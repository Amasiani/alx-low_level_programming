#include "main.h"

/**
* *_strncat - concat two string with at least n value
* @dest: The destination value.
* @src: Source value
* @n: limit of concat.
*
* Return: retiurn pointer to rsulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (dest[len])
		len++;
	while (i < n && src[i])
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len + (n + 1)] = '\0';
	return (dest);
}
