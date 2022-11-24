#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
* print_list - print all element of a list
* @h: header pointer
*
* Return: number of nodes
*/

size_t print_list(const size_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0], (nil)\n");
			h = h->next;
			counter++;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
			counter++;
		}
	}
	return (counter);
}															
