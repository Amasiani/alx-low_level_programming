#include "lists.h"

/**
* print_listint - print all elements of listint_t list
* @h: listint_t list head
*
* Return: numbers of elements
*/

size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++, h = h->next)
		printf("%d\n", h->n);
	return (i);
}
