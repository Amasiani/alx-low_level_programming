#include "lists.h"

/**
* dlistint_len - Number of elements ina linked dlistint_ list
* @h: Head of the linked list
*
* Description: Print number of eements in a linked dlistint_t link
* Return: Number of elements
*/

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements;

	for (elements = 0; h != NULL; h = h->next; elements++)
		;
	return (elements);
}
