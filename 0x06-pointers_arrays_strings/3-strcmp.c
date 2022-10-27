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
	int i = 0;
	int aux;

	while (*(s1 + 1) > *(s2 + 1))
	{
		if (*(s1 + i) - *(s2 + i))
		{
			aux = *(s1 + i) - *(s2 + i);
			return (aux);
		}
		else if (*(s1 + i) < *(s2 + i))
		{
			aux = *(s1 +i) - *(s2 + i);
			return (aux);
		}
		i += 1;
	}
	return (0);
}
