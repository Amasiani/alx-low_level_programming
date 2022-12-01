#include "lists.h"

/**
* listint_len - Return the number of element in a linked listint_t list
* @h: head of list
*
* Return: Number of elements
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
