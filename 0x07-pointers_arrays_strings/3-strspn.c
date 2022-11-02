#include "main.h"

/**
* _strspn - gets the length of prefix substring
*
* @s: inital segments
* @accept: value to check
* Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int cont = 0;
	int i = 0;
	int j = 0;
	int flag;

	while (*(s + i) != '\0')
	{
		flag = 0;
		while (*(accept + j) != '\0')
		{
			if (*s == *(acceptt + j))
				flag = 1;
			j += 1;
		}
		j = 0;
		if (flag == 0)
			break;
		cont += 1;
		s++
	}
	return (cont);
}
