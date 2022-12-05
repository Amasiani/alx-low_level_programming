#include "lists.h"

/**
* print_listint - print all element of a listint_t list
* @h: Head of the list
*
* Return: Number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t  i = 0;

	while (h)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
