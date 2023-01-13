#include "lists.h"

/**
* print_dlistint - Print a doubly linked list
*
* @h: Head of a linked list
*
* Return: Number of elements of the list
* Description: Print all the elements of a linked list
*/
i
size_t print_dlistint(const dlistint_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; h = h->next, elements++)
		printf("%i\n", h->n);

	return (elements);
}
