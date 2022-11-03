#include "main.h"

/**
* wildcmp - compare two string and return 1 if identical else 0
* @s1: value to check
* @s2: vlaue to check
*
* Return: 1 if identical else 0
*/


int wildcmp(char *s1, char *s2)
{
	if (s2 == NULL && *(s2 + 1) != '\0' && *s1 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s == *s2)
		return (wildcmp(s1 + 1, s2 + 2));
	if (s2 == NULL)
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
