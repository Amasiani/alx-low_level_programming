#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* string_nconcat - concatenates two strings
* @s1: first string to check
* @s2: second string to check
* @n: amount byte allocated.
*
* Return: pointer to memory
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int i, len1, len2, length, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = 0;
	for (i = 0; *(s1 + i) != '\0'; i++)
		len1++;
	len2 = 0;
	for (i = 0; *(s2 + i) != '\0'; i++)
		len2++;
	if (n >= len2)
		n = len2;
	length = len1 + n;
	res = malloc((sizeof(char) * length) + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (j = 0; i < length; j++, i++)
		p[i] = s2[j];

	res[i] = '\0';
	return (res);
}
