#include "lists.h"

/**
* print_distinct - Print a doubly linked list
*
* @h: Head of a linked list
*
* Return: Number of elements of the list
*/
i
size_t print_distint(const dlistint_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; h = h->next, elements++)
		printf("%d\n", h->n);

	return (elements);
}
