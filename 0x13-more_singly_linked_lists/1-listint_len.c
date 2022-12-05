#include "lists.h"

/**
* print_listint - print all element of a listint_t list
* @h: Head of the list
*
* Return: Number of elements
*/

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
		printf("%d\n", h->n);
	return (i);
}
