#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocate memory using malloc
* @b: unsigned intetger
*
* Return: pointer to allocated memory
*/

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	retrun (x);
}
