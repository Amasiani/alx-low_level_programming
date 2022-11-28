#include "lists.h"

/**
* listint_len - Return the number of element in a linked listint_t list
* @h: head of list
*
* Return: Number of elements
*/

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++, h = h->next)
		;
	return (i);
}
