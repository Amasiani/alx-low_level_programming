#include "main.h"
#include <stdlib.h>

/**
* _calloc - allocate memory for an array
* @nmemb - number of elemnts in an array
* @size: size of bytes
*
* Return: pointer to allocated array
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		rerurn (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i =; i < (nmemb *size); i++)
		p[i] = 0;
	return (p);
}
