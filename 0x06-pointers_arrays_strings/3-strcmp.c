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
	int i= 0, j = 0, k = 0, l = 0, lin;

	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (i <= j)
		lin = i;
	else
		lin = j;
	while (k <= lin)
	{
		if (s1[k] == s2[k])
		{
			k++;
			continue;
		}
		else
		{
			l = s1[k] - s2[k];
			break;
		}
	}
	return (k);
}
