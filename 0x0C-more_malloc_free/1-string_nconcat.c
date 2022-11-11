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
	char *result;
	unsigned int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n > b)
		n = b;
	c = a + n;
	result = malloc(c + 1)
	if (result == NULL)
		return (NULL);
	for (d = 0; d < c; d++)
		if (d < a)
			result[d] = s1[d];
		else
			result[d] = s2[d - a];
	result[d] = '\0';
	return (result);
}
