#include "main.h"

/**
* leet - encode a string into 1337
* @s: input string
* Return: returns pointer to buffer
*/

char *leet(char *s)
{
	int counter = 0, i;
	int low_letter[] = {97, 101, 111, 116, 108};
	int upper_letter[] = {65, 69, 79, 84, 76};
	int number[] = {52, 51, 48, 55, 49};

	while (*(s + counter) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + counter) == low_letter[i] || *(s + counter) == upper_letter[i])
			{
				*(s + counter) = number[i];
				break;
			}
		}
		counter++;
	}
	return (s);
}
