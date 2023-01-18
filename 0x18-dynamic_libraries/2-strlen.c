#include "main.h"

/**
* _strlen - return the length of a string
* @s: value to check for
* Return: Always 0
*/

int _strlen(char *s)
{
	int count = 1, sum = 0;
	char loc = s[0];

	while (loc != '\0')
	{
		sum++;
		loc = s[count++];
	}
return (sum);
}
