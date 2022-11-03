#include "main.h"

/**
* _strlen_recurseion - returns the length of a string
* @s: string to receive
*
* Return: int.
*/

int _strlen_recursion(char *s)
{
	if (*s == '\n')
		return (0);
	s++;
	return (1 + _strlen_recursion(s + 1));
}
