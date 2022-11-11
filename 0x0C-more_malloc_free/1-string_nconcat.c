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
	unsigned int a, b;

	a = b = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[a] != '\0')
		a += 1;
	while (s2[b] != '\0')
		b += 1;
	b++;
	if (n >= b)
		n = b;
	result = malloc(sizeof(*result) * n + (a + 1))
	if (result == NULL)
		return (NULL);
	a = 0;
	while (s1[a] != '\0')
	{
		result[a] = s1[a];
		a += 1;
	}
	b = 0;
	while (s2[b] != '\0' && b < n)
	{
		result[a] = s2[b];
		a++;
		b++;
	}
	result[a] = '\0';
	return (result);
}
