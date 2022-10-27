#include "main.h"

/**
* _strcmp - compare two string
* @s1: string to check
* @s2: second strig to compare
*
* Return: Always 0
*/

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
